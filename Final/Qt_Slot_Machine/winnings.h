#ifndef WINNINGS_H
#define WINNINGS_H


class Winnings
{
private:
    int winnings;
    int multiplier;
    int bet;
public:
    Winnings();
    void setMult(int multiplier);
    int getMult();
    void setWinnings(int winnings);
    int getWinnings();
};

#endif // WINNINGS_H
