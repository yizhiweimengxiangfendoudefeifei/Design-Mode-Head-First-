#pragma once

#include <iostream>

// This is the interface for the quack behavior classes
class QuackBehavior
{
public:
    QuackBehavior() = default;
    ~QuackBehavior() = default;

    virtual void QuackB() = 0;
};

class Quack : public QuackBehavior
{
public:
    Quack() = default;
    ~Quack() = default;

    void QuackB() override {
        std::cout << "Quack" << std::endl;
    }
};

class MuteQuack : public QuackBehavior
{
public:
    MuteQuack() = default;
    ~MuteQuack() = default;

    void QuackB() override {
        std::cout << "<< Silence >>" << std::endl;
    }
};

class Squeak : public QuackBehavior
{
public:
    Squeak() = default;
    ~Squeak() = default;

    void QuackB() override {
        std::cout << "Squeak" << std::endl;
    }
};