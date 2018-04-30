#include "dish.h"
#include <iostream>

using std::string;
using std::shared_ptr;
using std::cout;
using std::endl;

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
	if (_nextKitchenTool)
		_nextKitchenTool->handleIngredient(ingredient);
	else
		cout << "Dish complete!" << endl;
}
