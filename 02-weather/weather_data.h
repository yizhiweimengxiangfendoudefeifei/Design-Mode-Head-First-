#pragma once

#include <vector>
#include <algorithm>

#include "subject.h"

class WeatherData : public Subject

{
public:
    WeatherData() {
        observers_ = std::vector<Observer*>();
    }
    ~WeatherData() = default;

    // 注册观察者
    void RegisterObserver(Observer* o) override {
        observers_.push_back(o);
    }
    // 观察者取消注册
    void RemoveObserver(Observer* o) override {
        for (int i = 0; i < observers_.size(); i++) {
            if (observers_[i] != nullptr && observers_[i] == o) {
                observers_.erase(observers_.begin() + i);
                i--;
            }
        }
    }
    // 通知观察者，因为观察者都实现了update，因此我们知道如何通知他们
    void NotifyObservers() override {
        for (auto observer : observers_) {
            observer->Update(temperature_, humidity_, pressure_);
        }
    }

    // 当从气象站得到更新观测值时，我们通知观察者
    void MeasurementsChanged() {
        NotifyObservers();
    }

    // 模拟气象站更新观测值
    void SetMeasurements(double temperature, double humidity, double pressure) {
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
        MeasurementsChanged();
    }

private:
    double temperature_;
    double humidity_;
    double pressure_;

    std::vector<Observer*> observers_;
};

