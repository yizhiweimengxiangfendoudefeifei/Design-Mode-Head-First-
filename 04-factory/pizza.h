#pragma once

#include <iostream>
#include <vector>

class Pizza {
public:
    Pizza() = default;
    virtual ~Pizza() = default;
    void prepare() {
        std::cout << "Preparing " << name_ << std::endl;
        std::cout << "Tossing dough..." << std::endl;
        std::cout << "Adding sauce..." << std::endl;
        std::cout << "Adding toppings: " << std::endl;
        for (const auto& topping : toppings_) {
            std::cout << "   " << topping << std::endl;
        }
    }

    void bake() {
        std::cout << "Bake for 25 minutes at 350" << std::endl;
    }

    void cut() {
        std::cout << "Cutting the pizza into diagonal slices" << std::endl;
    }

    void box() {
        std::cout << "Place pizza in official PizzaStore box" << std::endl;
    }

    std::string get_name() const {
        return name_;
    }

    void set_name(const std::string& name) {
        name_ = name;
    }

    std::string get_dough() const {
        return dough_;
    }

    void set_dough(const std::string& dough) {
        dough_ = dough;
    }

    std::string get_sauce() const {
        return sauce_;
    }

    void set_sauce(const std::string& sauce) {
        sauce_ = sauce;
    }

    std::vector<std::string> get_toppings() const {
        return toppings_;
    }

    void set_toppings(const std::vector<std::string>& toppings) {
        toppings_ = toppings;
    }


private:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() {
        set_name("NY Style Sauce and Cheese Pizza");
        set_dough("Thin Crust Dough");
        set_sauce("Marinara Sauce");
        std::vector<std::string> toppings = {"Grated Reggiano Cheese"};
        set_toppings(toppings);
    }
};

class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza() {
        set_name("NY Style Veggie Pizza");
        set_dough("Thin Crust Dough");
        set_sauce("Marinara Sauce");
        std::vector<std::string> toppings = {"Grated Reggiano Cheese", "Garlic", "Onion", "Mushrooms", "Red Pepper"};
        set_toppings(toppings);
    }
};

class NYStyleClamPizza : public Pizza {
public:
    NYStyleClamPizza() {
        set_name("NY Style Clam Pizza");
        set_dough("Thin Crust Dough");
        set_sauce("Marinara Sauce");
        std::vector<std::string> toppings = {"Grated Reggiano Cheese", "Clams", "Garlic"};
        set_toppings(toppings);
    }
};

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza() {
        set_name("NY Style Pepperoni Pizza");
        set_dough("Thin Crust Dough");
        set_sauce("Marinara Sauce");
        std::vector<std::string> toppings = {"Grated Reggiano Cheese", "Sliced Pepperoni", "Garlic", "Onion", "Red Pepper"};
        set_toppings(toppings);
    }
};

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        set_name("Chicago Style Deep Dish Cheese Pizza");
        set_dough("Extra Thick Crust Dough");
        set_sauce("Plum Tomato Sauce");
        std::vector<std::string> toppings = {"Shredded Mozzarella Cheese"};
        set_toppings(toppings);
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};

class ChicagoStyleVeggiePizza : public Pizza {
public:
    ChicagoStyleVeggiePizza() {
        set_name("Chicago Style Deep Dish Veggie Pizza");
        set_dough("Extra Thick Crust Dough");
        set_sauce("Plum Tomato Sauce");
        std::vector<std::string> toppings = {"Shredded Mozzarella Cheese", "Black Olives", "Spinach", "Eggplant"};
        set_toppings(toppings);
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza() {
        set_name("Chicago Style Deep Dish Clam Pizza");
        set_dough("Extra Thick Crust Dough");
        set_sauce("Plum Tomato Sauce");
        std::vector<std::string> toppings = {"Shredded Mozzarella Cheese", "Frozen Clams from Chesapeake Bay"};
        set_toppings(toppings);
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};

class ChicagoStylePepperoniPizza : public Pizza {
public:
    ChicagoStylePepperoniPizza() {
        set_name("Chicago Style Deep Dish Pepperoni Pizza");
        set_dough("Extra Thick Crust Dough");
        set_sauce("Plum Tomato Sauce");
        std::vector<std::string> toppings = {"Shredded Mozzarella Cheese", "Black Olives", "Spinach", "Eggplant"};
        set_toppings(toppings);
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};