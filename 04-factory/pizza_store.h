#pragma once
#include "pizza.h"

class PizzaStore {
public:
    PizzaStore() = default;
    virtual ~PizzaStore() = default;
    virtual Pizza* create_pizza(const std::string& type) = 0;

    Pizza* order_pizza(const std::string& type) {
        Pizza* pizza = create_pizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};

class NYPizzaStore : public PizzaStore {
public:
    NYPizzaStore() = default;
    ~NYPizzaStore() override = default;

    Pizza* create_pizza(const std::string& type) override {
        if (type == "cheese") {
            auto pizza = new NYStyleCheesePizza();
            pizza->set_name("NY Style Sauce and Cheese Pizza");
            return pizza;
        } else if (type == "veggie") {
            auto pizza = new NYStyleVeggiePizza();
            pizza->set_name("NY Style Veggie Pizza");
            return pizza;
        } else if (type == "clam") {
            auto pizza = new NYStyleClamPizza();
            pizza->set_name("NY Style Clam Pizza");
            return pizza;
        } else if (type == "pepperoni") {
            auto pizza = new NYStylePepperoniPizza();
            pizza->set_name("NY Style Pepperoni Pizza");
            return pizza;
        } else {
            return nullptr;
        }
    }
};

class ChicagoPizzaStore : public PizzaStore {
public:
    ChicagoPizzaStore() = default;
    ~ChicagoPizzaStore() override = default;

    Pizza* create_pizza(const std::string& type) override {
        if (type == "cheese") {
            auto pizza = new ChicagoStyleCheesePizza();
            pizza->set_name("Chicago Style Deep Dish Cheese Pizza");
            return pizza;
        } else if (type == "veggie") {
            auto pizza = new ChicagoStyleVeggiePizza();
            pizza->set_name("Chicago Style Deep Dish Veggie Pizza");
            return pizza;
        } else if (type == "clam") {
            auto pizza = new ChicagoStyleClamPizza();
            pizza->set_name("Chicago Style Deep Dish Clam Pizza");
            return pizza;
        } else if (type == "pepperoni") {
            auto pizza = new ChicagoStylePepperoniPizza();
            pizza->set_name("Chicago Style Deep Dish Pepperoni Pizza");
            return pizza;
        } else {
            return nullptr;
        }
    }
};