#include "MainWindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTranslator translator;
    if (translator.load(":/ruitai_zh_CN")) {
        QCoreApplication::installTranslator(&translator);
    }

    MainWindow w;
    w.show();
    return app.exec();
}
