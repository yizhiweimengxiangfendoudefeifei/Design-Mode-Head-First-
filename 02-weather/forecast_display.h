#pragma once

#include <iostream>
#include "subject.h"

class ForecastDisplay : public Observer, public DisplayElement {
public:
    ForecastDisplay(Subject* weatherData) {
        weather_data_ = weatherData;
        weather_data_->RegisterObserver(this);
    }
    ~ForecastDisplay() {
        weather_data_->RemoveObserver(this);
    }

    void Update(double temperature, double humidity, double pressure) override {
        last_pressure_ = current_pressure_;
        current_pressure_ = pressure;
        Display();
    }

    void Display() override {
        std::cout << "Forecast: " << (current_pressure_ > last_pressure_ ? "Improving weather on the way!" : "Watch out for cooler, rainy weather") << std::endl;
    }
private:
    double current_pressure_ = 29.92;
    double last_pressure_;
    Subject* weather_data_;
};