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
    openFolder(filePath);
    setSongTitle(songTitle_);
    qDebug() << "filePath" << filePath ;
}

void AudioPlayer::openFolder(const QString &filePath)
{
    QString fileName = filePath.section('/', -1); // Lấy phần cuối của đường dẫn (tên file)

       // Bỏ phần mở rộng .mp3
       fileName = fileName.section('.', 0, 0);

       // Tách chuỗi dựa trên dấu gạch ngang
       QStringList parts = fileName.split('-');
       if (parts.size() >= 2) {
           songTitle_ = parts.at(0).trimmed();   // Phần trước dấu gạch ngang là tên bài hát
           artistName_ = parts.at(1).trimmed(); // Phần sau là tên ca sĩ
           qDebug() << "Tên bài hát: " << songTitle_;
           qDebug() << "Tên ca sĩ: " << artistName_;
       } else {
           qDebug() << "Không thể lấy được thông tin bài hát và ca sĩ.";
       }
       // xử lý tên bài hát
       QString songTitle = filePath.section('/', -1);  // Lấy phần cuối cùng của đường dẫn
       songTitle = songTitle.split('-').first();       // Lấy phần trước dấu "-"
       addSong(songTitle);  // Thêm tên bài hát vào danh sách
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

void AudioPlayer::clickArtist(const QString &filePath)
{
    player->setMedia(QUrl::fromLocalFile(filePath));
    player->play();
}

QString AudioPlayer::songTitle() const {
    return songTitle_;
}

QString AudioPlayer::artistName() const {
    return artistName_;
}
QStringList AudioPlayer::songList() const {
    return songList_;
}
void AudioPlayer::addSong(const QString &song) {
    // Kiểm tra xem bài hát đã tồn tại trong danh sách chưa
    if (!songList_.contains(song)) {
        songList_.append(song);  // Nếu chưa tồn tại, thêm bài hát vào danh sách
        emit songListChanged();  // Phát tín hiệu khi danh sách thay đổi
        qDebug() << "Added song: " << song;  // Debug thêm bài hát
    } else {
        qDebug() << "Song already exists: " << song;  // Debug nếu bài hát đã tồn tại
    }
}

void AudioPlayer::setSongTitle(const QString &title)
{
    if (songTitle_ != title) {
        songTitle_ = title;
        emit songTitleChanged();  // Phát tín hiệu khi giá trị thay đổi
    }
}

void AudioPlayer::setArtistName(const QString &name)
{
    if (artistName_ != name) {
        artistName_ = name;
        emit artistNameChanged();  // Phát tín hiệu khi giá trị thay đổi
    }
}


void AudioPlayer::updateMetaData() {
}

void AudioPlayer::onMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    // Khi media đã tải xong và metadata có sẵn
    if (status == QMediaPlayer::LoadedMedia) {
            updateMetaData();
        }
}

