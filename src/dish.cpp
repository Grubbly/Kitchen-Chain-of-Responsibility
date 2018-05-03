/*
dish.cpp
Tristan Van Cise
Software Construction Final
05/03/2018
Source file for Dish base class
*/

#include "dish.h"
#include <iostream>
#include <utility>

using std::string;
using std::shared_ptr;
using std::cout;
using std::endl;
using std::pair;

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

void Dish::handleIngredient(const string & action, const string & ingredient)
{
	if (_nextKitchenTool)
		_nextKitchenTool->handleIngredient(action, ingredient);
	else
		cout << "\n*** The specified kitchen could not handle \"" << action << " " << ingredient << "\" ***\n*** Append more kitchen tools or change handleIngredient parameters. ***\n" << endl;
}

