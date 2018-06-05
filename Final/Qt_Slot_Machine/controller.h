#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>
#include <reel.h>

class Controller : public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    Controller();
    ~Controller();

    char getLetter();

signals:
    void getNumber(const int &);

public slots:
    void handleResult(const char &letter);

private:
    char letter;
};

#endif // CONTROLLER_H
