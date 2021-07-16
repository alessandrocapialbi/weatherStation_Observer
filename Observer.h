//
// Created by aless on 16/07/2021.
//

#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {};

    virtual void update(float temp, float hum, float pressure) = 0;

    virtual void display() = 0;

};

#endif //OBSERVER_OBSERVER_H
