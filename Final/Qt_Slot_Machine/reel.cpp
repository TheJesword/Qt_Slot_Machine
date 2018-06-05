#include "reel.h"

Reel::Reel(QObject *parent) : QObject(parent)
{

}


void Reel::getLetter(const int &parameter)
{
   char letter;

   // function takes in a letter and emits that letter to the thread
   if(parameter == 1)
       letter = 'A';
   else if(parameter == 2)
       letter = 'B';
   else if(parameter == 3)
       letter = 'C';
   else if(parameter == 4)
       letter = 'D';
   else if(parameter == 5)
       letter = 'E';
   else if(parameter == 6)
       letter = 'F';
   else if(parameter == 7)
       letter = 'G';

   emit resultReady(letter);
}

void Reel::attach(Observer *observer)
{
    view.push_back(observer);
}

void Reel::setValue(int value)
{
    this->value = value;
    notify();
}

void Reel::notify()
{
    for (int i = 0; i < view.size(); ++i)
      view[i]->update(value);
}

