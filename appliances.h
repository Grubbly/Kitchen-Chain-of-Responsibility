#include "dish.h"

#ifndef APPLIANCES_H
#define APPLIANCES_H

class Oven : public Dish{
public:
	Oven() = default;
	void handleIngredient(const std::string & ingredient);
};

#endif //!APPLIANCES_H