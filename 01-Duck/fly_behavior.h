#pragma once

#include <iostream>

// This is the interface for the fly behavior classes
class FlyBehavior
{
public:
    FlyBehavior() = default;
    ~FlyBehavior() = default;

    virtual void Fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
public:
    FlyWithWings() = default;
    ~FlyWithWings() = default;

    void Fly() override {
        std::cout << "I'm flying!!" << std::endl;
    }
};

class FlyNoWay : public FlyBehavior
{
public:
    FlyNoWay() = default;
    ~FlyNoWay() = default;

    void Fly() override {
        std::cout << "I can't fly" << std::endl;
    }
};

class FlyRocketPowered : public FlyBehavior
{
public:
    FlyRocketPowered() = default;
    ~FlyRocketPowered() = default;

    void Fly() override {
        std::cout << "I'm flying with a rocket!" << std::endl;
    }
};