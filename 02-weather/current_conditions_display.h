#pragma once


#include <iostream>
#include "subject.h"

// 观察者只需要注册主题即可
class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
    CurrentConditionsDisplay(Subject* weatherData) {
        weather_data_ = weatherData;
        weather_data_->RegisterObserver(this);
    }
    ~CurrentConditionsDisplay() {
        weather_data_->RemoveObserver(this);
    }

    void Update(double temperature, double humidity, double pressure) override {
        temperature_ = temperature;
        humidity_ = humidity;
        Display();
    }

    void Display() override {
        std::cout << "Current conditions: " << temperature_ << "F degrees and " << humidity_ << "% humidity" << std::endl;
    }
private:
    double temperature_;
    double humidity_;
    Subject* weather_data_;
};