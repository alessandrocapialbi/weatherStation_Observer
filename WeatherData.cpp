//
// Created by aless on 16/07/2021.
//

#include "WeatherData.h"

WeatherData::WeatherData(string name, float surface) : name(name), surface(surface), temperature(0), humidity(0),
                                                       pressure(0) {}

void WeatherData::registerObserver(Observer *o) {
    obsList.push_back(o);
}

void WeatherData::removeObserver(Observer *o) {
    obsList.remove(o);
}

void WeatherData::setMeasurements(float temp, float hum, float press) {
    temperature = temp;
    humidity = hum;
    pressure = press;
    measurementsChanged();
}

void WeatherData::notifyObservers() const {
    for (auto &i:obsList) {
        i->update(temperature, humidity, pressure);
    }
}
