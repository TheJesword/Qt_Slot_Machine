#ifndef REELOBSERVER_H
#define REELOBSERVER_H
#include <observer.h>
#include <reel.h>
#include <QVector>

class ReelObserver : Observer
{
     int leftNumber;
     int middleNumber;
     int rightNumber;
     int multiplier;
     int bet;

public:
    ReelObserver(Reel *model, int leftNumber, int middleNumber, int rightNumber);
    void update(int betNumber);
    void setMult(int multiplier);
    int getMult();
    void setBet(int bet);
    int getBet();
    int calcWinnings(int bet, int multiplier);
    ReelObserver();
};

#endif // REELOBSERVER_H
