//
// Created by aless on 16/07/2021.
//

#ifndef OBSERVER_FORECASTDISPLAY_H
#define OBSERVER_FORECASTDISPLAY_H

#include "Subject.h"
#include "Observer.h"
#include <memory>
#include <iostream>

using namespace std;

class ForecastDisplay : public Observer {
public:
    ForecastDisplay(shared_ptr<Subject> weatherData);

    ~ForecastDisplay() {
        weatherStation->removeObserver(this);
    }

    void update(float temperature, float humidity, float pressure);

    void display() override;


private:
    shared_ptr<Subject> weatherStation;
    float temperature, humidity, pressure;
};


#endif //OBSERVER_FORECASTDISPLAY_H
