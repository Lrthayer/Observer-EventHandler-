#ifndef OBSERVER_H
#define OBSERVER_H

#include "abstractobserver.h"

class Observer : public AbstractObserver
{
public:
    Observer(void(*f)());
    virtual void Notify();


private:
   void (*func_) (void);
};


#endif // OBSERVER_H
