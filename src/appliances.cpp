/*
appliances.cpp
Tristan Van Cise
Software Construction Final
05/03/2018
Source file for Appliance classified classes
*/

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
		cout << "oven could not " << action << " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
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
		cout << "Microwave could not " << action << " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void Stove::handleIngredient(const string & action, const string & ingredient)
{
	if (action == "boil" || action == "saute" || action == "cook")
	{
		cout << "\n---" << ingredient << " was " << action << (action == "saute" ? "d" : "ed") << " by the stove---\n" << endl;
	}
	else
	{
		cout << "Stove could not " << action << " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}
