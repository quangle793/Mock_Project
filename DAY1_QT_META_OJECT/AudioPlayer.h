#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include <QObject>
#include <QMediaPlayer>
#include <QString>
#include <QFileInfo>
#include <QDir>

class AudioPlayer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString songTitle READ songTitle WRITE setSongTitle NOTIFY songTitleChanged)
    Q_PROPERTY(QString artistName READ artistName WRITE setArtistName NOTIFY artistNameChanged)
    Q_PROPERTY(QStringList songList READ songList NOTIFY songListChanged)

public:
    explicit AudioPlayer(QObject *parent = nullptr);

    // Phương thức để mở file MP3
    Q_INVOKABLE void openFile(const QString &filePath);
    Q_INVOKABLE void openFolder(const QString &folderPath);

    // Phương thức để phát nhạc
    Q_INVOKABLE void play();

    // Phương thức để tạm dừng nhạc
    Q_INVOKABLE void pause();

    // Phương thức để dừng nhạc
    Q_INVOKABLE void stop();
    // Lấy tên bài hát từ metadata
    Q_INVOKABLE void clickArtist(const QString &filePath);


    // Lấy tên ca sĩ từ metadata
    QString songTitle() const;
    QString artistName() const;
    // danh sach bai hat
    QStringList songList() const;  // Hàm trả về danh sách bài hát
    void addSong(const QString &song);  // Thêm bài hát vào danh sách
    void setSongTitle(const QString &title);
    void setArtistName(const QString &name);

signals:
    void songTitleChanged();
    void artistNameChanged();
    void songListChanged();

private slots:
    void updateMetaData();
    void onMediaStatusChanged(QMediaPlayer::MediaStatus status);
private:
    QMediaPlayer *player;
    QString songTitle_ = "";
    QString artistName_ = "";
    QStringList songList_;
};

#endif // AUDIOPLAYER_H
