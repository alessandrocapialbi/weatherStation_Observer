cmake_minimum_required(VERSION 3.19)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer main.cpp Subject.h Observer.h WeatherData.h WeatherData.cpp ForecastDisplay.h ForecastDisplay.cpp)
