#pragma once

#include <iostream>

#include "beverage.h"

class Mocha : public condimentDecorator {
public:
    Mocha(Beverage* beverage) : beverage_(beverage) {}

    ~Mocha() { delete beverage_; }
    std::string getDescription() override {
        return beverage_->getDescription() + ", Mocha";
    }
    double cost() override {
        return 0.20 + beverage_->cost();
    }
private:
    Beverage* beverage_;
};

class Soy : public condimentDecorator {
public:
    Soy(Beverage* beverage) : beverage_(beverage) {}

    ~Soy() { delete beverage_; }
    std::string getDescription() override {
        return beverage_->getDescription() + ", Soy";
    }
    double cost() override {
        return 0.15 + beverage_->cost();
    }
private:
    Beverage* beverage_;
};

class Whip : public condimentDecorator {
public:
    Whip(Beverage* beverage) : beverage_(beverage) {}
    ~Whip() { delete beverage_; }
    
    std::string getDescription() override {
        return beverage_->getDescription() + ", Whip";
    }
    double cost() override {
        return 0.10 + beverage_->cost();
    }
private:
    Beverage* beverage_;
};
