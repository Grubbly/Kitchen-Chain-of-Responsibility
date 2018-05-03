# Kitchen-Chain-of-Responsibility
In order to make a dish, you have to use a number of appliances and tools to turn raw ingredients into something edible. Using the chain of responsibility design pattern, raw ingredients act as input, while appliances and tools that can handle the ingredient act as states. If an appliance can not or should not handle an ingredient, it is continuously passed on to the next appliance until it can be handled.

### Step 1: Create a Kitchen
```C++
vector<shared_ptr<Dish>> kitchenTools = { make_shared<Oven>(), 
                                          make_shared<Spatula>(), 
                                          make_shared<Microwave>() };
```

### Step 2: Chain The Kitchen Tools Together
```C++
if (kitchenTools.size() <= 0)
		throw exception("A dish must have at least 1 appliance or small kitchen tool!\n\n");

	Dish chainedDish(kitchenTools[0]);
	for (unsigned int toolNum = 1; toolNum < kitchenTools.size(); toolNum++)
		chainedDish.appendKitchenToolToChain(kitchenTools[toolNum]);
```

### Step 3: Add Ingredients To The Dish
```C++
Dish mac = chainKitchenTools(kitchenTools);

mac.handleIngredient("boil", "water");
mac.handleIngredient("boil", "noodles in water");
mac.handleIngredient("drain", "noodles");
mac.handleIngredient("mix", "noodles and cheese");
```

### Step 4: EAT :smile:


## Complete Process:
```C++
vector<shared_ptr<Dish>> kitchenTools = { make_shared<Oven>(), 
                                          make_shared<Spatula>(), 
                                          make_shared<Microwave>() };

if (kitchenTools.size() <= 0)
		throw exception("A dish must have at least 1 appliance or small kitchen tool!\n\n");

	Dish chainedDish(kitchenTools[0]);
	for (unsigned int toolNum = 1; toolNum < kitchenTools.size(); toolNum++)
		chainedDish.appendKitchenToolToChain(kitchenTools[toolNum]);

Dish mac = chainKitchenTools(kitchenTools);

mac.handleIngredient("boil", "water");
mac.handleIngredient("boil", "noodles in water");
mac.handleIngredient("drain", "noodles");
mac.handleIngredient("mix", "noodles and cheese");

//Mac & Cheese Complete!
```

# Resources
https://sourcemaking.com/design_patterns/chain_of_responsibility/cpp/1
