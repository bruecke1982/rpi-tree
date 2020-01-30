#include "testhandler.h"
#include <QDebug>
void TestHandler::buttonClick(const QString& in)
{
    qDebug() << in;
}
