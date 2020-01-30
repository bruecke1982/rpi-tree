#ifndef TESTHANDLER_H_
#define TESTHANDLER_H_
#include <QObject>

class TestHandler : public QObject
{
   Q_OBJECT

protected slots:
    void buttonClick(const QString& in);
};
#endif // TESTHANDLER_H_
