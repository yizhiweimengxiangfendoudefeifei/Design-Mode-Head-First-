#include "duck.h"
#include "mallard_duck.h"
#include "model_duck.h"

void func(int& x) {

}
int main() {
    MallardDuck mallard_duck;
    mallard_duck.Display();
    mallard_duck.PerformFly();
    mallard_duck.PerformQuack();
    mallard_duck.Swim();

    ModelDuck model_duck;
    model_duck.Display();
    model_duck.PerformFly();
    model_duck.SetFlyBehavior(new FlyRocketPowered());
    model_duck.PerformFly();
    return 0;
}