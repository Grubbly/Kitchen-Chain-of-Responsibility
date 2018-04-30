/*
	dish.h
	Tristan Van Cise
	Software Construction Final
	04/30/2018
	Header for Chain of Responsibility Kitchen design pattern.
*/

#include <memory>
#include <string>

class Dish {
public:
	Dish(std::shared_ptr<Dish> kitchenTool) : _nextKitchenTool(kitchenTool) {};
	void setNextKitchenTool(std::shared_ptr<Dish> kitchenTool);
	void appendKitchenToolToChain(std::shared_ptr<Dish> kitchenTool);
	void handleIngredient(const std::string & ingredient);
private:
	std::shared_ptr<Dish> _nextKitchenTool;
};