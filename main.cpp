#include "kitchen.h"

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

Dish chainKitchenTools(const vector<shared_ptr<Dish>> & kitchenTools)
{
	if (kitchenTools.size() <= 0)
		throw exception("A dish must have at least 1 appliance or small kitchen tool!\n\n");

	Dish chainedDish(kitchenTools[0]);
	for (unsigned int toolNum = 1; toolNum < kitchenTools.size(); toolNum++)
		chainedDish.appendKitchenToolToChain(kitchenTools[toolNum]);

	return chainedDish;
}

void makeChickenNoodleSoup(const vector<shared_ptr<Dish>> & kitchenTools)
{
	Dish chickenNoodleSoup = chainKitchenTools(kitchenTools);

	chickenNoodleSoup.handleIngredient("gobble", "butter");
	chickenNoodleSoup.handleIngredient("bake", "chicken");
	chickenNoodleSoup.handleIngredient("saute", "carrot");
	chickenNoodleSoup.handleIngredient("microwave", "broth");
	chickenNoodleSoup.handleIngredient("boil", "water");
	chickenNoodleSoup.handleIngredient("pour", "broth");
	chickenNoodleSoup.handleIngredient("mix", "carrot and chicken");
}

void makeMacNCheese(const vector<shared_ptr<Dish>> & kitchenTools)
{
	Dish mac = chainKitchenTools(kitchenTools);

	mac.handleIngredient("boil", "water");
	mac.handleIngredient("boil", "noodles in water");
	mac.handleIngredient("drain", "noodles");
	mac.handleIngredient("mix", "noodles and cheese");
}

void makeChile(const vector<shared_ptr<Dish>> & kitchenTools)
{
	Dish chile = chainKitchenTools(kitchenTools);

	chile.handleIngredient("open", "chile can");
	chile.handleIngredient("microwave", "chile");
}

void makeBurger(const vector<shared_ptr<Dish>> & kitchenTools)
{
	Dish burger = chainKitchenTools(kitchenTools);

	burger.handleIngredient("saute", "patty");
	burger.handleIngredient("cut", "lettuce");
	burger.handleIngredient("quarter", "tomato");
	burger.handleIngredient("slice", "tomato");
	burger.handleIngredient("dice", "onion");
	burger.handleIngredient("flip", "patty");
}

void makeEggs(const vector<shared_ptr<Dish>> & kitchenTools)
{
	Dish eggs = chainKitchenTools(kitchenTools);

	eggs.handleIngredient("whisk", "egg");
	eggs.handleIngredient("cook", "scrambled egg");
	eggs.handleIngredient("flip", "scrambled egg");
}

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


	cout << "[ENTER] to quit";
	std::cin.get();
	return 0;
}