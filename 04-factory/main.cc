
#include "pizza_store.h"

int main() {
    PizzaStore* ny_store = new NYPizzaStore();
    PizzaStore* chicago_store = new ChicagoPizzaStore();

    Pizza* pizza = ny_store->order_pizza("cheese");
    std::cout << "Ethan ordered a " << pizza->get_name() << std::endl;

    pizza = chicago_store->order_pizza("cheese");
    std::cout << "Joel ordered a " << pizza->get_name() << std::endl;
    delete ny_store;
    delete chicago_store;
    delete pizza;

}