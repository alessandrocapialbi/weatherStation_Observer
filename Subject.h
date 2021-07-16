//
// Created by aless on 16/07/2021.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H
#include "Observer.h"

class Subject {
public:
    virtual ~Subject() {};

    virtual void registerObserver(Observer *o) = 0;

    virtual void removeObserver(Observer *o) = 0;

    virtual void notifyObservers() const = 0;

};


#endif //OBSERVER_SUBJECT_H
