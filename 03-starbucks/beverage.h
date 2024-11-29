#pragma once

#include <string>

class Beverage {
public:
    Beverage() = default;
    virtual ~Beverage() = default;

    virtual double cost() = 0;
    virtual std::string getDescription() {
        return description_;
    }
protected:
    std::string description_ = "Unknown Beverage";
    double cost_;
};

// condimentDecorator，装饰者类
class condimentDecorator : public Beverage {
public:
    virtual std::string getDescription() = 0;
};

