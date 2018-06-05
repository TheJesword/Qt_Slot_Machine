#include "winnings.h"

Winnings::Winnings()
{
    multiplier = 0;
}

void Winnings::setMult(int multiplier)
{
    this->multiplier = multiplier;
}

int Winnings::getMult()
{
    return multiplier;
}

void Winnings::setWinnings(int bet)
{
    this->bet = bet;
}

int Winnings::getWinnings()
{
    return bet * getMult();
}
