#include "reelobserver.h"

ReelObserver::ReelObserver()
{

}

ReelObserver::ReelObserver(Reel *model, int leftNumber, int middleNumber, int rightNumber)
 {
     model->attach(this);
     this->leftNumber = leftNumber;
     this->middleNumber = middleNumber;
     this->rightNumber = rightNumber;
 }

void ReelObserver::update(int betNumber)
{
    /*
    qDebug() << "Bet Number: " << betNumber;
    qDebug() << "Left Number: " << leftNumber;
    qDebug() << "Middle Number: " << middleNumber;
    qDebug() << "Right Number: " << rightNumber << "\n";

    // Supposed to determine the Multiplier/ winnings
    // Could not figure out how to send the value back to the main

    if(leftNumber == 1 && middleNumber == 1 && rightNumber == 1)
        multiplier = 1;
    else if(leftNumber == 2 && middleNumber == 2 && rightNumber == 2)
        multiplier = 2;
    else if(leftNumber == 3 && middleNumber == 3 && rightNumber == 3)
        multiplier = 3;
    else if(leftNumber == 4 && middleNumber == 4 && rightNumber == 4)
        multiplier = 4;
    else if(leftNumber == 5 && middleNumber == 5 && rightNumber == 5)
        multiplier = 5;
    else if(leftNumber == 6 && middleNumber == 6 && rightNumber == 6)
        multiplier = 6;
    else if(leftNumber == 7 && middleNumber == 7 && rightNumber == 7)
       multiplier = 7;
    else if(leftNumber == 1 && middleNumber == 2 && rightNumber == 3)
       multiplier = 8;
    else if(leftNumber == 4 && middleNumber == 5 && rightNumber == 6)
        multiplier = 9;
    else
        multiplier = 0;

    qDebug() << "multiplier: " << multiplier;

    setMult(multiplier);
    qDebug() << "getMult" << getMult();
    */
}

void ReelObserver::setMult(int& multiplier)
{
    this->multiplier = multiplier;
}

int ReelObserver::getMult()
{
    return multiplier;
}




