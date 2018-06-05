#ifndef REEL_H
#define REEL_H

#include <QDebug>
#include <QObject>
#include <observer.h>

class Reel : public QObject
{
    Q_OBJECT
    int value;
    QVector <Observer *> view;

public:
    explicit Reel(QObject *parent = nullptr);
    void attach(Observer *obs);
    void setValue(int value);
    void notify();
signals:
    void resultReady(const int &);
public slots:
    void getLetter(const int &);
};

#endif // REEL_H
