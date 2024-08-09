#pragma once

#include <iostream>

#include "subject.h"

class StatisticsDisplay : public Observer, DisplayElement {

public:
    StatisticsDisplay(Subject* weatherData) {
        weather_data_ = weatherData;
        weather_data_->RegisterObserver(this);
    }
    ~StatisticsDisplay() {
        weather_data_->RemoveObserver(this);
    }

    void Update(double temperature, double humidity, double pressure) override {
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
        Display();
    }

    void Display() override {
        std::cout << "Avg/Max/Min temperature = " << (temperature_ + max_temperature_ + min_temperature_) / 3 << "/" << max_temperature_ << "/" << min_temperature_ << std::endl;
    }
private:
    double max_temperature_ = 80;
    double min_temperature_ = -80;
    double temperature_;
    double humidity_;
    double pressure_;
    Subject* weather_data_;
};