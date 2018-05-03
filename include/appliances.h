/*
appliances.h
Tristan Van Cise
Software Construction Final
05/03/2018
Header for Appliance classes inherited from Dish
*/

#include "dish.h"
#include <string>

#ifndef APPLIANCES_H
#define APPLIANCES_H

class Oven : public Dish{
public:
	Oven() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};


class Microwave : public Dish {
public:
	Microwave() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};

class Stove : public Dish {
public:
	Stove() = default;
	void handleIngredient(const std::string & action, const std::string & ingredient);
};
#endif //!APPLIANCES_H