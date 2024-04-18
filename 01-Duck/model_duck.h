#pragma once

#include <iostream>

#include "duck.h"

class ModelDuck : public Duck
{
public:
    ModelDuck() {
        fly_behavior_ = new FlyNoWay();
        quack_behavior_ = new Quack();
    }

    ~ModelDuck() = default;

    void Display() override {
        std::cout << "I'm a model duck" << std::endl;
    }
};