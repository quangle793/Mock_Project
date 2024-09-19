#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "AudioPlayer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    app.setOrganizationName("YourOrganizationName");
    app.setOrganizationDomain("yourorganizationdomain.com");

    // Tạo đối tượng AudioPlayer
    AudioPlayer audioPlayer;

    // Đưa đối tượng AudioPlayer vào QML context
    engine.rootContext()->setContextProperty("audioPlayer", &audioPlayer);

    // Load QML
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
