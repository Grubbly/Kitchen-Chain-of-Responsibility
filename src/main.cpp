/*
main.cpp
Tristan Van Cise
Software Construction Final
05/03/2018
Main - runs tests in regards to kitchen module
*/

#include "kitchen.h"
#include "test.h"

#include <vector>
#include <string>
#include <exception>
#include <memory>
#include <iostream>
#include <utility>

using std::string;
using std::vector;
using std::exception;
using std::make_shared;
using std::shared_ptr;
using std::cout;
using std::endl;
using std::cin;
using std::pair;
using std::make_pair;

int main()
{
	cout << "\n\nCHICKEN NOODLE SOUP\n\n" << endl;
	/*** CHICKEN NOODLE SOUP ***/
	vector<shared_ptr<Dish>> aKitchen = { make_shared<Oven>(), make_shared<Microwave>(), make_shared<MixingBowl>(), make_shared<Stove>() };
	try {
		makeChickenNoodleSoup(aKitchen);
	} catch(exception & e) {
		cout << e.what() << endl;
	}


	cout << "\n\nMAC & CHEESE\n\n" << endl;
	/*** MAC & CHEESE ***/
	aKitchen = { make_shared<Stove>(), make_shared<MixingBowl>(), make_shared<Strainer>() };
	try {
		makeMacNCheese(aKitchen);
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}


	cout << "\n\nTHROW FAILURE\n\n" << endl;
	/*** MAC & CHEESE ***/
	aKitchen = { };
	try {
		makeMacNCheese(aKitchen);
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}


	cout << "\n\nCHILE\n\n" << endl;
	/*** CHILE ***/
	aKitchen = {make_shared<CanOpener>(), make_shared<Microwave>()};
	try {
		makeChile(aKitchen);
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}


	cout << "\n\nBURGER\n\n" << endl;
	/*** BURGER ***/
	aKitchen = { make_shared<Knife>(), make_shared<Spatula>(), make_shared<Stove>() };
	try {
		makeBurger(aKitchen);
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}


	cout << "\n\nSCRAMBLED EGGS\n\n" << endl;
	/*** SCRAMBLED EGGS ***/
	aKitchen = { make_shared<Whisk>(), make_shared<Spatula>(), make_shared<Stove>() };
	try {
		makeEggs(aKitchen);
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}


	cout << "\n\nRANDOM BAD ACTIONS\n\n" << endl;
	/*** RANDOM BAD ACTIONS ***/
	aKitchen = { make_shared<Whisk>(), make_shared<Spatula>(), make_shared<Stove>(),
				 make_shared<Microwave>(), make_shared<Strainer>(), make_shared<Oven>(),
				 make_shared<Knife>(), make_shared<MixingBowl>(), make_shared<CanOpener>() };
	try {
		makeNothing(aKitchen);
	}
	catch (exception & e) {
		cout << e.what() << endl;
	}


	cout << "[ENTER] to quit";
	std::cin.get();
	return 0;
}