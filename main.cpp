#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    for (auto path : engine.importPathList()) {
        std::cout << path.toStdString() << std::endl;
    }

    const QUrl url(u"qrc:/hello/main.qml"_qs);
    engine.load(url);

    return app.exec();
}
