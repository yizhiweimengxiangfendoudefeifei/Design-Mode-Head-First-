#pragma once

#include "beverage.h"

class Espresso : public Beverage {
public:
    Espresso() {
        description_ = "Espresso";
    }
    double cost() override {
        return 1.99;
    }
};

class HouseBlend : public Beverage {
public:
    HouseBlend() {
        description_ = "House Blend Coffee";
    }
    double cost() override {
        return 0.89;
    }
};

class DarkRoast : public Beverage {
public:
    DarkRoast() {
        description_ = "Dark Roast Coffee";
    }
    double cost() override {
        return 0.99;
    }
};