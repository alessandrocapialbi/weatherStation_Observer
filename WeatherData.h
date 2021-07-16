//
// Created by aless on 16/07/2021.
//

#ifndef OBSERVER_WEATHERDATA_H
#define OBSERVER_WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <string>
#include <list>


using namespace std;

class WeatherData : public Subject {

public:
    list<Observer *> obsList;

    WeatherData(string name, float surface);

    void registerObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() const override;

    void measurementsChanged() {
        notifyObservers();
    }

    void setMeasurements(float temp, float hum, float press);

    float getTemperature() const {
        return temperature;
    }

    float getHumidity() const {
        return humidity;
    }

    string getStationName() const{
        return name;
    }


    float getPressure() const {
        return pressure;
    }

private:
    float temperature, humidity, pressure, surface;
    string name;

};


#endif //OBSERVER_WEATHERDATA_H
