#include "kitchen.h"
#include <vector>
#include <memory>

#ifndef TEST_H
#define TEST_H

Dish chainKitchenTools(const std::vector<std::shared_ptr<Dish>> & kitchenTools);
void makeChickenNoodleSoup(const std::vector<std::shared_ptr<Dish>> & kitchenTools);
void makeMacNCheese(const std::vector<std::shared_ptr<Dish>> & kitchenTools);
void makeChile(const std::vector<std::shared_ptr<Dish>> & kitchenTools);
void makeBurger(const std::vector<std::shared_ptr<Dish>> & kitchenTools);
void makeEggs(const std::vector<std::shared_ptr<Dish>> & kitchenTools);
void makeNothing(const std::vector<std::shared_ptr<Dish>> & kitchenTools);

#endif // !TEST_H
