#include "appliances.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void Oven::handleIngredient(const string & action, const string & ingredient)
{
	if (action == "bake")
	{
		cout << "\n---" << ingredient << " cooked by the oven---\n" << endl;
	}
	else
	{
		cout << "oven could not cook the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void Microwave::handleIngredient(const string & action, const string & ingredient)
{
	if (action == "microwave")
	{
		cout << "\n---" << ingredient << " was microwaved---\n" << endl;
	}
	else
	{
		cout << "Microwave could not heat the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void Stove::handleIngredient(const string & action, const string & ingredient)
{
	if (action == "boil" || action == "saute")
	{
		cout << "\n---" << ingredient << " was " << action << (action == "boil" ? "ed" : "d") << " by the stove---\n" << endl;
	}
	else
	{
		cout << "Stove could not cook the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}
