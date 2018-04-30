#include "appliances.h"
#include <iostream>

using std::cout;
using std::endl;

void Oven::handleIngredient(const std::string & ingredient)
{
	if (ingredient == "meat")
	{
		cout << ingredient << " cooked by the oven" << endl;
	}
	else
	{
		cout << "oven could not cook the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(ingredient);
	}
}
