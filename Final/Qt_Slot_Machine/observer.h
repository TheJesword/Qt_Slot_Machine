#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
    virtual void update(int value) = 0;
    Observer();
};

#endif // OBSERVER_H
