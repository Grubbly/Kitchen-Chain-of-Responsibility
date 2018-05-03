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

Dish prepareChickenNoodleSoup(const vector<shared_ptr<Dish>> & kitchenToolList)
{
	if (kitchenToolList.size() <= 0)
		throw exception("A dish must have at least 1 appliance or small kitchen tool!");

		Dish chickenNoodleSoup(kitchenToolList[0]);
		for (int toolNum = 1; toolNum < kitchenToolList.size(); toolNum++)
			chickenNoodleSoup.appendKitchenToolToChain(kitchenToolList[toolNum]);

		return chickenNoodleSoup;
}

int main()
{
	Dish chickenNoodleSoup;
	vector<shared_ptr<Dish>> aKitchen = { make_shared<Oven>(), make_shared<Microwave>(), make_shared<Oven>(), make_shared<Stove>() };
	try {
		chickenNoodleSoup = prepareChickenNoodleSoup(aKitchen);
	} catch(exception & e) {
		e.what();
	}

	chickenNoodleSoup.handleIngredient("meme", "butter");
	chickenNoodleSoup.handleIngredient("bake", "meat");
	chickenNoodleSoup.handleIngredient("saute", "carrot");
	chickenNoodleSoup.handleIngredient("microwave", "butter");
	chickenNoodleSoup.handleIngredient("boil", "water");

	std::cin.get();
}