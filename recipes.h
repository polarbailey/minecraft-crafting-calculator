#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

extern bool hasBamboo;
extern bool hasSilkTouch;
extern bool hasStonecutter;
extern bool hasBadlands;
extern bool hasNether;
extern bool hasBees;
extern bool preferBambooSticks;
extern bool woolFromSheep;

enum StackSize{
    SIXTY_FOUR = 64,
    SIXTEEN = 16,
    SINGLE = 1
};

class Ingredient {
public:
    string name;
    unsigned int quantity;

    Ingredient() : name(""), quantity(0) {}
    string getName() {return name; }
    unsigned int getQuantity() {return quantity; }
};

class Recipe {
public:
    string name;
    Ingredient ingredients[9];
    int ingredientCount;
    unsigned int yieldAmount;
    StackSize stackSize;
    bool requiresBadlands = false;
    bool requiresBamboo = false;
    bool requiresNether = false;
    bool requiresSilkTouch = false;
    bool requiresStonecutter = false;
    bool isSmelt = false;
    bool requiresBees = false;
    bool isObtainable = false;

    Recipe() : name(""), ingredientCount(0), yieldAmount(0), stackSize(SIXTY_FOUR),  // default constructor
        requiresBadlands(false), requiresBamboo(false), requiresNether(false),
        requiresSilkTouch(false), requiresStonecutter(false),
        isSmelt(false), requiresBees(false), isObtainable(false) {}

    // Member functions
    string getName() { return name; }
    int getIngredientCount() { return ingredientCount; }
    unsigned int getYield() { return yieldAmount; }
    bool isAvailable() {                            // checks if the player has the required resources/tools for this recipe
        if (requiresBamboo && !hasBamboo) return false;
        if (requiresBamboo && hasBamboo && !preferBambooSticks) return false;
        if (requiresSilkTouch && !hasSilkTouch) return false;
        if (requiresStonecutter && !hasStonecutter) return false;
        if (requiresBadlands && !hasBadlands) return false;
        if (requiresNether && !hasNether) return false;
        return true;
    }
    void reset() {                                  
        *this = Recipe();
    }
};

class BaseItem {
public:
    string name;
    StackSize stackSize;
    bool requiresSilkTouch = false;
    bool requiresBamboo = false;
    bool requiresBadlands = false;
    bool requiresNether = false;
    bool requiresBees = false;

    BaseItem() : name(""), stackSize(SIXTY_FOUR),  // default constructor
        requiresSilkTouch(false), requiresBamboo(false),
        requiresBadlands(false), requiresNether(false),
        requiresBees(false) {}

    // Member functions
    string getName() { return name; }
    StackSize getStackSize() { return stackSize; }
    bool isAvailable() {                            // checks if the player has access to this base item
        if (requiresSilkTouch && !hasSilkTouch) return false;
        if (requiresBamboo && !hasBamboo) return false;
        if (requiresBadlands && !hasBadlands) return false;
        if (requiresNether && !hasNether) return false;
        if (requiresBees && !hasBees) return false;
        return true;
    }
};

extern vector<Recipe> recipes; //telling the compiler that these are declared elsewhere
extern vector<BaseItem> baseItems;

void populateBaseItems();
void populateRecipes();
void populateSmelts();
int findRecipe(string itemName);
int findBaseItem(string itemName);
void resolveRecipe(string itemName, unsigned int quantity, vector<string>& resultNames, vector<unsigned int>& resultQuantities);
StackSize getStackSize(string itemName, bool& found);