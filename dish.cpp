#include "dish.h"
using std::string;
using std::shared_ptr;

void Dish::setNextKitchenTool(shared_ptr<Dish> kitchenTool)
{
	_nextKitchenTool = kitchenTool;
}

void Dish::appendKitchenToolToChain(shared_ptr<Dish> kitchenTool)
{
	if (_nextKitchenTool)
		_nextKitchenTool->appendKitchenToolToChain(kitchenTool);
	else
		_nextKitchenTool = kitchenTool;
}

void Dish::handleIngredient(const string & ingredient)
{
	_nextKitchenTool->handleIngredient(ingredient);
}
