#include "dish.h"
#include <string>

#ifndef SMALLKITCHENTOOLS_H
#define SMALLKITCHENTOOLS_H

class Spatula : public Dish {
public:
	Spatula() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};


class Whisk : public Dish {
public:
	Whisk() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};

class Knife : public Dish {
public:
	Knife() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};

class CanOpener : public Dish {
public:
	CanOpener() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};

class MixingBowl : public Dish {
public:
	MixingBowl() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};

class Strainer : public Dish {
public:
	Strainer() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};

#endif // !SMALLKITCHENTOOLS_H
