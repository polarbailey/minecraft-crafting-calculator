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

enum StackSize{
    SIXTY_FOUR = 64,
    SIXTEEN = 16,
    SINGLE = 1
};

struct Ingredient {
    string name;
    unsigned int quantity;
};
struct Recipe {
    string name;
    Ingredient ingredients[9];
    int ingredientCount;
    unsigned int yieldAmount;
    bool requiresBadlands = false;
    bool requiresBamboo = false;
    bool requiresNether = false;
    bool requiresSilkTouch = false;
    bool requiresStonecutter = false;
    bool isSmelt = false;
    bool requiresBees = false;
    bool isObtainable = false;
    StackSize stackSize;
};
struct BaseItem {
    string name;
    StackSize stackSize;
    bool requiresSilkTouch = false;
    bool requiresBamboo = false;
    bool requiresBadlands = false;
    bool requiresNether = false;
    bool requiresBees = false;
};

extern vector<Recipe> recipes; //telling the compiler that these are declared elsewhere
extern vector<BaseItem> baseItems;

void populateBaseItems();
void populateRecipes();
void populateSmelts();
int findRecipe(string itemName);
int findBaseItem(string itemName);
void resolveRecipe(string itemName, unsigned int quantity, vector<string>& resultNames, vector<unsigned int>& resultQuantities);
StackSize getStackSize(string itemName);