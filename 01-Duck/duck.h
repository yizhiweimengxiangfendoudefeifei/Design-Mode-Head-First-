#pragma once

#include <iostream>
#include "fly_behavior.h"
#include "quack_behavior.h"

class Duck
{

public:
    Duck() = default;
    ~Duck() {
        delete fly_behavior_;
        delete quack_behavior_;
    }

    virtual void Display() = 0;

    void Swim() {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }

    void PerformFly() {
        fly_behavior_->Fly();// delegate to the behavior class
    }

    void PerformQuack() {
        quack_behavior_->QuackB();
    }

    void SetFlyBehavior(FlyBehavior* fb) {
        fly_behavior_ = fb;
    }

    void SetQuackBehavior(QuackBehavior* qb) {
        quack_behavior_ = qb;
    }

public:
    FlyBehavior* fly_behavior_;
    QuackBehavior* quack_behavior_;
};


