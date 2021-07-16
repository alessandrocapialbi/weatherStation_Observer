//
// Created by aless on 16/07/2021.
//

#include "ForecastDisplay.h"

using namespace std;

ForecastDisplay::ForecastDisplay(shared_ptr<Subject> weatherData) :
        weatherStation(weatherData), temperature(20), humidity(80),
        pressure(100) { weatherStation->registerObserver(this); }

void ForecastDisplay::update(float temp, float hum, float press) {
    temperature = temp;
    humidity = hum;
    pressure = press;
}

void ForecastDisplay::display() {
    cout.setf(std::ios::showpoint);
    cout.precision(3);
    cout << "Current conditions: " << temperature;
    cout << " degrees and: " << humidity;
    cout << "% humidity and " << pressure << "Pa" << endl << endl;
}
