#ifndef REELOBSERVER_H
#define REELOBSERVER_H
#include <observer.h>
#include <reel.h>

class ReelObserver : Observer
{
private:
     int leftNumber;
     int middleNumber;
     int rightNumber;
     int multiplier;
     int beNumber;

public:
    ReelObserver(Reel *model, int leftNumber, int middleNumber, int rightNumber);
    void update(int betNumber);
    void setMult(int& multiplier);
    int getMult();
    ReelObserver();
};

#endif // REELOBSERVER_H
