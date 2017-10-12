#include <functional>  // for std::function and std::bind
#include <iostream>
#include "observerhandler.h"
#include "observer.h"

enum Event {RED, GREEN, ORANGE};

void foo(int i)
{
  std::cout << "foo( " <<  i << " )\n";
}

void bar()
{
  std::cout << "bar()\n";
}

int main()
{
    ObserverHandler *test = ObserverHandler::getInstance();

    Observer *test2 = new Observer(bar);

    test->addObserver(*test2);
    test->NotifyObservers();

}
