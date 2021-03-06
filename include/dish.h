/*
	dish.h
	Tristan Van Cise
	Software Construction Final
	04/30/2018
	Header for Base Class of Chain of Responsibility Kitchen design pattern.
*/

#include <memory>
#include <string>
#include <utility>

#ifndef DISH_H
#define DISH_H

class Dish {
public:
	Dish() = default;
	Dish(std::shared_ptr<Dish> kitchenTool) : _nextKitchenTool(kitchenTool) {};
	void setNextKitchenTool(std::shared_ptr<Dish> kitchenTool);
	void appendKitchenToolToChain(std::shared_ptr<Dish> kitchenTool);
	virtual void handleIngredient(const std::string & action, const std::string & ingredient);
private:
	std::shared_ptr<Dish> _nextKitchenTool;
};

#endif // !DISH_H
