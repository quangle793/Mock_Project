#include "AudioPlayer.h"
#include <QUrl>
#include <QDebug>

AudioPlayer::AudioPlayer(QObject *parent)
    : QObject(parent)
{
    player = new QMediaPlayer(this);
    connect(player, &QMediaPlayer::mediaStatusChanged, this, &AudioPlayer::onMediaStatusChanged);
}

void AudioPlayer::openFile(const QString &filePath)
{
    player->setMedia(QUrl::fromLocalFile(filePath));
    player->play();
    parseFileName(filePath);
    qDebug() << "filePath" << filePath ;
}

void AudioPlayer::openFolder(const QString &folderPath)
{
    QDir directory(folderPath);
       QStringList mp3Files = directory.entryList(QStringList() << "*.mp3", QDir::Files); // Lấy danh sách các file .mp3 trong thư mục

       // Nếu có ít nhất một file MP3
       if (!mp3Files.isEmpty()) {
           QString firstMp3File = mp3Files.first();  // Chọn file đầu tiên trong danh sách
           QString filePath = directory.absoluteFilePath(firstMp3File);  // Đường dẫn đầy đủ tới file MP3
           qDebug() << "Opening file:" << filePath;

           openFile(filePath);  // Mở file MP3 bằng cách gọi hàm openFile
       } else {
           qDebug() << "No MP3 files found in the folder!";
       }
}

void AudioPlayer::play()
{
    player->play();
}

void AudioPlayer::pause()
{
    player->pause();
}

void AudioPlayer::stop()
{
    player->stop();
}

QString AudioPlayer::songTitle() const {
    return player->metaData("Title").toString();
}

QString AudioPlayer::artistName() const {
    return player->metaData("Author").toString();
}

void AudioPlayer::updateMetaData() {
    QString metaTitle = player->metaData("Title").toString();
        QString metaArtist = player->metaData("Author").toString();

        // Kiểm tra nếu metadata có sẵn
        if (!metaTitle.isEmpty() && !metaArtist.isEmpty()) {
            songTitle_ = metaTitle;
            artistName_ = metaArtist;
            emit songTitleChanged();
            emit artistNameChanged();
        } else {
            qDebug() << "Metadata not available, using filename to extract info";
        }
}

void AudioPlayer::onMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    // Khi media đã tải xong và metadata có sẵn
        if (status == QMediaPlayer::LoadedMedia) {
            updateMetaData();
        }
}

void AudioPlayer::parseFileName(const QString &filePath)
{
    QFileInfo fileInfo(filePath);
        QString baseName = fileInfo.baseName();  // Lấy tên file mà không có phần mở rộng ".mp3"

        // Tách tên bài hát và tên ca sĩ từ tên file
        QStringList parts = baseName.split('-');
        if (parts.size() >= 3) {
            songTitle_ = parts[0]; // Phần đầu là tên bài hát
            artistName_ = parts[1]; // Phần giữa là tên ca sĩ
        } else {
            songTitle_ = "Unknown Title";
            artistName_ = "Unknown Artist";
        }

        emit songTitleChanged();
        emit artistNameChanged();
}
