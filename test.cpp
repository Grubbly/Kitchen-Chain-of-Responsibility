#include <vector>
using std::vector;
#include <exception>
using std::exception;
#include <memory>
using std::shared_ptr;
#include "kitchen.h"

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

void makeNothing(const vector<shared_ptr<Dish>> & kitchenTools)
{
	Dish random = chainKitchenTools(kitchenTools);

	random.handleIngredient("eat", "ash");
	random.handleIngredient("foo", "bar");
	random.handleIngredient("Follow", "MeMusic");
	random.handleIngredient("Burn", "The Food");
	random.handleIngredient("Solve", "World Hunger");
}