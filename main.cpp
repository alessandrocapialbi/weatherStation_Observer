#include <iostream>
#include <list>
#include <string>
#include <memory>
#include "WeatherData.h"
#include "ForecastDisplay.h"

using namespace std;

int main() {

    auto weatherData = make_shared<WeatherData>("Pistoia", 5000);
    ForecastDisplay forecastDisplay(weatherData);
    forecastDisplay.display();
    weatherData->setMeasurements(30, 70, 200);
    cout<<endl<<endl;
    forecastDisplay.display();


}
