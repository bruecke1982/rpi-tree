#include <QApplication>
#include <QQmlApplicationEngine>
#include <iostream>
#include <QString>
#include <QObject>
#include <QQmlContext>
#include "testhandler.h"



int main(int argc, char** argv)
{
    TestHandler test;
   //Q_INIT_RESOURCE(application);

   QApplication app(argc, argv);
   QQmlApplicationEngine engine;
   engine.load(QStringLiteral(":/main.qml"));
 //  QQmlContext *qcon = new QQmlContext();
   engine.rootContext()->setContextProperty("test",&test);
   //engine.rootContext()->setContextProperty("test",&test);
   return app.exec();
}

