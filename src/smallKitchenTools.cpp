/*
smallKitchenTools.cpp
Tristan Van Cise
Software Construction Final
05/03/2018
Source file for Small Kitchen Tool classified classes
*/


#include "smallKitchenTools.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;

void Spatula::handleIngredient(const std::string & action, const std::string & ingredient)
{
	if (action == "flip")
	{
		cout << "\n---" << ingredient << " flipped by the spatula---\n" << endl;
	}
	else
	{
		cout << "spatula could not " + action + " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void Whisk::handleIngredient(const std::string & action, const std::string & ingredient)
{
	if (action == "whisk")
	{
		cout << "\n---" << ingredient << " was whisked by the whisk---\n" << endl;
	}
	else
	{
		cout << "whisk could not " + action + " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void Knife::handleIngredient(const std::string & action, const std::string & ingredient)
{
	if (action == "cut" || action == "slice" || action == "dice" || action == "quarter")
	{
		cout << "\n---" << ingredient << " was " << action 
			 << (action == "cut" ? "" : (action == "quarter" ? "ed" : "d")) <<" by the knife---\n" << endl;
	}
	else
	{
		cout << "knife could not " + action + " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void CanOpener::handleIngredient(const std::string & action, const std::string & ingredient)
{
	if (action == "open")
	{
		cout << "\n---" << ingredient << " was opened by the can opener---\n" << endl;
	}
	else
	{
		cout << "can opener could not " + action + " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void MixingBowl::handleIngredient(const std::string & action, const std::string & ingredient)
{
	if (action == "mix" || action == "pour")
	{
		cout << "\n---" << ingredient << " was " << action << "ed in the mixing bowl---\n" << endl;
	}
	else
	{
		cout << "mixing bowl could not " + action + " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}

void Strainer::handleIngredient(const std::string & action, const std::string & ingredient)
{
	if (action == "drain")
	{
		cout << "\n---" << ingredient << " was " << action << "ed using the strainer---\n" << endl;
	}
	else
	{
		cout << "strainer could not " + action + " the " + ingredient + " - passing it onto the next kitchen tool..." << endl;
		Dish::handleIngredient(action, ingredient);
	}
}
