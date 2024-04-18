#pragma once

#include <iostream>

#include "fly_behavior.h"
#include "quack_behavior.h"
#include "duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck() {
        fly_behavior_ = new FlyWithWings();
        quack_behavior_ = new Quack();
    }

    ~MallardDuck() = default;

    void Display() override {
        std::cout << "I'm a real Mallard duck" << std::endl;
    }
};