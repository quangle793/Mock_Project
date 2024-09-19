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
    Q_PROPERTY(QString songTitle READ songTitle NOTIFY songTitleChanged)
    Q_PROPERTY(QString artistName READ artistName NOTIFY artistNameChanged)
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
    QString songTitle() const;

    // Lấy tên ca sĩ từ metadata
    QString artistName() const;
signals:
    void songTitleChanged();
    void artistNameChanged();

private slots:
    void updateMetaData();
    void onMediaStatusChanged(QMediaPlayer::MediaStatus status);
    void parseFileName(const QString &filePath);
private:
    QMediaPlayer *player;
    QString songTitle_;
    QString artistName_;
};

#endif // AUDIOPLAYER_H
