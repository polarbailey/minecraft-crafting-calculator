#include <iostream>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>
#include <vector>

using namespace std;

bool hasBamboo = false;
bool hasSilkTouch = false;
bool hasStonecutter = false;
bool hasBadlands = false;
bool hasNether = false;
bool hasBees = false;

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

vector<Recipe> recipes;
vector<BaseItem> baseItems;

void displayQuantity(string itemName, unsigned int itemAmount) {
    unsigned int doubleChests = itemAmount / 93312; // 99312 = 54 shulkers full of stacks of items.
    unsigned int shulkers = (itemAmount % 93312) / 1728; // Amount of full shulkers that don't completely fill a double chest
    unsigned int remainder = itemAmount % 1728; // total items not filling a full shulker
    unsigned int stacks = remainder / 64; // amount of full stacks that don't fill a full shulker
    unsigned int excess = remainder % 64; // amount of loose items

    cout << "For " << itemAmount << " " << itemName << ", you will need " << endl;
    this_thread::sleep_for(chrono::milliseconds(416));
    cout << "\nConverting";
    cout.flush();
    this_thread::sleep_for(chrono::milliseconds(417));
    for (int i = 0; i < 3; i++) {
        cout << " . ";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(417));
    }
    cout << endl << endl;
    if (doubleChests > 0) {
        cout << doubleChests;
        if (doubleChests == 1) cout << " Double Chest of Shulkers";
        else cout << " Double Chests of Shulkers";
        if (shulkers > 0 || stacks > 0 || excess > 0) cout << " + "; // this way there aren't erroneous "+" or other stuff if the math was clean whole numbers
    }
    if (shulkers > 0) {
        cout << shulkers;
        if (shulkers == 1) cout << " Shulker";
        else cout << " Shulkers";
        if (stacks > 0 || excess > 0) cout << " + "; 
    }
    if (stacks > 0) {
        cout << stacks;
        if (stacks == 1) cout << " Stack";
        else cout << " Stacks";
        if (excess > 0) cout << " + ";
    }
    if (excess > 0) {
        cout << excess << " ";
    }
    if (excess == 0) {
        cout << " of";
    }
    cout << " " << itemName << "." << endl;
}

void populateRecipes(){
    Recipe recipe;

    // first all the Stonecutter Recipes

    recipe.name = "Chiseled Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cobblestone Slab";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cobblestone Stiar";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cobblestone Wall";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone Stair";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone Wall";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    // Then all the Multi Craft Stonecutter recipes

    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Copper Grate";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Block";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = SIXTY_FOUR;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 8;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    //Regular Single Crafts now

    recipe.name = "Bamboo Block";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Blaze Powder";
    recipe.ingredients[0].name = "Blaze Rod";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Bonemeal";
    recipe.ingredients[0].name = "Bone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Brewing Stand";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Blaze Rod";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Bucket";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
        
    recipe.name = "Bundle";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Leather";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
        
    recipe.name = "Cauldron";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone Brick Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Clay Block";
    recipe.ingredients[0].name = "Clay Ball";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Coal Block";
    recipe.ingredients[0].name = "Coal";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Cobblestone Slab";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Cobblestone Stair";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Cobblestone Wall";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Compass";
    recipe.ingredients[0].name = "Redstone Dust";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Concrete Powder"; // All colors grouped here, will separate by color later
    recipe.ingredients[0].name = "Dye";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Sand";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredients[2].name = "Gravel";
    recipe.ingredients[2].quantity = 4;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 8;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Copper Bars";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Copper Block";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Copper Nugget";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Copper Trapdoor";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Cut Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Dropper";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Furnace";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Glass Bottle";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Honey Bottle";
    recipe.ingredients[0].name = "Glass Bottle";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresBees = true;
    recipe.isObtainable = true;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
        
    recipe.name = "Glowstone";
    recipe.ingredients[0].name = "Glowstone Dust";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Gold Block";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Hay Bale";
    recipe.ingredients[0].name = "Wheat";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Heavy Weighted Pressure Plate";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Iron Bars";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Iron Block";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Iron Door";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Iron Ingot";
    recipe.ingredients[0].name = "Iron Nugget";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Iron Nugget";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Iron Trapdoor";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.name = "Lead";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Light Weighted Pressure Plate";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Lightning Rod";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Minecart";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Paper";
    recipe.ingredients[0].name = "Sugar Cane";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Planks";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Redstone Block";
    recipe.ingredients[0].name = "Redstone Dust";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone Stair";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sandstone Wall";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Shears";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Slime Block";
    recipe.ingredients[0].name = "Slimeball";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stick";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipe.requiresBamboo = true;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Pressure Plate";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Sugar";
    recipe.ingredients[0].name = "Sugar Cane";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Wool";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    // Regular Multi Crafts now

    recipe.name = "Activator Rail";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredients[2].name = "Redstone Torch";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Anvil";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Iron Block";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Bamboo Planks";
    recipe.ingredients[0].name = "Bamboo Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Barrel";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Wooden Slab";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Bed";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Wool";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Beehive";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Honeycomb";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Blast Furnace";
    recipe.ingredients[0].name = "Furnace";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 5;
    recipe.ingredients[2].name = "Smooth Stone";
    recipe.ingredients[2].quantity = 3;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Boat";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Book";
    recipe.ingredients[0].name = "Leather";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Bookshelf";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Book";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Bow";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Button";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Campfire";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredients[2].name = "Coal";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cartography Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Chest";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Chiseled Bookshelf";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Wooden Slab";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Cut Copper Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Composter";
    recipe.ingredients[0].name = "Wooden Slab";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Copper Bulb";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[2].name = "Blaze Rod";
    recipe.ingredients[25].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Copper Chain";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Copper Nugget";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Copper Grate";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Copper Ingot";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Crafter";
    recipe.ingredients[0].name = "Crafting Table";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredients[2].name = "Dropper";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredients[3].name = "Iron Ingot";
    recipe.ingredients[3].quantity = 5;
    recipe.ingredientCount = 4;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Crafting Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Block";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Cut Cupper Block";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Detector Rail";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stone Pressure Plate";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[2].name = "Redstone Dust";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Dispenser";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[2].name = "Bow";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Door"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Fence"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Fence Gate"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Firework"; // This is only showing for flight level 1 fireworks. Will add the other levels later, but likely not the rest of firework crafting outside of whats needed for elytra travel
    recipe.ingredients[0].name = "Gunpowder";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Fishing Rod";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Fletching Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Flint";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Glass Pane";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Grindstone";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredients[2].name = "Stone Slab";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Honey Block";
    recipe.ingredients[0].name = "Honey Bottle";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Hopper";
    recipe.ingredients[0].name = "Chest";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 5;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Hopper Minecart";
    recipe.ingredients[0].name = "Hopper";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Minecart";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Iron Chain";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Nugget";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Jukebox";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Diamond";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.name = "Ladder";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Lectern";
    recipe.ingredients[0].name = "Wooden Slab";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Bookshelf";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Lever";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Lodestone"; // if playing in an older version you might need Netherite ingot instead of iron, but this will be accurate as of 1.21.5
    recipe.ingredients[0].name = "Chiseled Stone Brick";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Loom";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Note Block";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Observer";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredients[2].name = "Nether Quartz";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Piston";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Planks";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredients[2].name = "Iron Ingot";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredients[3].name = "Redstone Dust";
    recipe.ingredients[3].quantity = 4;
    recipe.ingredientCount = 4;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Powered Rail";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Rail";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Redstone Comparator";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Redstone Torch";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredients[2].name = "Nether Quartz";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Redstone Repeater";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Redstone Torch";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Redstone Torch";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.name = "Scaffolding";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Shield";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Shulker Box";
    recipe.ingredients[0].name = "Chest";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Shulker Shell";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.name = "Sign"; // Doesn't differentiate wood types yet, but matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
    
    recipe.name = "Smithing Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Smoker";
    recipe.ingredients[0].name = "Furnace";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Log";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stained Glass"; // consolidates all colors for now.
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Dye";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 8;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
}

void populateBaseItems(){
    BaseItem item;

    item.name = "Amethyst Shard";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item.name = "Bamboo";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item.name = "Basalt";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Blaze Rod";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Bone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Bone Block";
    item.stackSize = SIXTY_FOUR;
    item.requiresNether = true;
    baseItems.push_back(item);
    
    item.name = "Clay Ball";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Clay Block";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item.name = "Coal";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Cobblestone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Copper Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Copper Nugget";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Diamond";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Dye";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    /*This will eventually be expanded to all 16 colors as well as their recipes to craft them*/
    
    item.name = "Ender Pearl";
    item.stackSize = SIXTEEN;
    baseItems.push_back(item);
    
    item.name = "Flint";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Glass";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item.name = "Glowstone";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item.name = "Glowstone Dust";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Gold Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Gravel";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Gunpowder";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item.name = "Honeycomb";
    item.stackSize = SIXTY_FOUR;
    item.requiresBees = true;
    baseItems.push_back(item);
    
    item.name = "Iron Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Iron Nugget";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Leather";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    /*Will eventually be expanded to all wood types*/

    item.name = "Nether Quartz";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Netherrack";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Redstone Dust";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Sand";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Sandstone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Shulker Shell";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Slimeball";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Stone";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch;
    baseItems.push_back(item);
    
    item.name = "String";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Sugar Cane";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item.name = "Terracotta";
    item.stackSize = SIXTY_FOUR;
    item.requiresBadlands = true;
    baseItems.push_back(item);
    
    item.name = "Wheat";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item.name = "Wool";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
}

void populateSmelts(){
    Recipe recipe;

    recipe.name = "Brick";
    recipe.ingredients[0].name = "Clay Ball";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Charcoal";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Glass";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Nether Brick";
    recipe.ingredients[0].name = "Netherrack";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Smooth Basalt";
    recipe.ingredients[0].name = "Basalt";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Smooth Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Smooth Stone";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Stone";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.name = "Terracotta";
    recipe.ingredients[0].name = "Clay Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
};

void displayDirectory(string items[], int itemCount, string categoryName, string& navigate){
    int totalPages = (itemCount + 4) / 5;
    int currentPage = 1;

    do{
        cout << endl << categoryName << ": Page " << currentPage << " of " << totalPages << endl;
        int startIndex = (currentPage - 1) * 5;
        int i;
        for (i = startIndex; i < min(startIndex + 5, itemCount); i++)
            cout << (i+1) << ". " << items[i] << endl;
        if(totalPages == 1){
        // A single page, so no need for a Next or Prev Page option
        }
        else if(currentPage == 1){
            cout << "\nN. Next Page" << endl;
        }
        else if(currentPage == totalPages){
            cout << "\nP. Prev Page" << endl;
        }
        else{
            cout << "\nP. Prev Page" << endl << "N. Next Page" << endl;
        }
        cout << "D. Directory Menu" << endl;
        cout << "B. Back to Main Menu" << endl;
        cin >> navigate;
        transform(navigate.begin(), navigate.end(), navigate.begin(), ::tolower);

        if (navigate == "n" || navigate == "next"){
            if(currentPage == totalPages){
                cout << "This is the last page." << endl;
            }
            else{
                currentPage++;
            }
        }
        else if(navigate == "p" || navigate == "prev" || navigate == "previous"){
            if(currentPage == 1){
                cout << "This is the first page." << endl;
            }
            else{
                currentPage--;
            }
        }
        else if (navigate == "d" || navigate == "directory"){

        }
        else if (navigate == "b" || navigate == "back"){
            // this line was intentionally left blank.
        }
        else{
            cout << "I'm sorry, my database is limited. You must enter the right selection." << endl << endl;
        }

    } while(navigate != "b" && navigate != "back" && navigate != "d" && navigate != "directory");
}
void directoryBaseItems(string& navigate){
    string items[] = {
        "Amethyst Shard",
        "Bamboo",
        "Basalt",
        "Blaze Rod",
        "Bone",
        "Bone Block - Requires Nether access",
        "Clay Ball",
        "Clay Block - Requires Silk Touch",
        "Coal",
        "Cobblestone",
        "Copper Ingot",
        "Copper Nugget",
        "Diamond",
        "Dye (No distinct colors, all are just under Dye)",
        "Ender Pearl"
        "Flint",
        "Glass - Requires Silk Touch or Smelting",
        "Glowstone - Requires Silk Touch",
        "Glowstone Dust",
        "Gold Ingot",
        "Gravel",
        "Gunpowder",
        "Iron Ingot",
        "Iron Nugget",
        "Leather",
        "Log (Doesn't differentiate wood types)",
        "Nether Quartz",
        "Netherrack",
        "Redstone Dust",
        "Sand",
        "Sandstone",
        "Shulker Shell",
        "Slimeball",
        "Stone - Requires Silk Touch or Smelting",
        "String",
        "Sugar Cane",
        "Wheat",
        "Wool"
    };
    displayDirectory(items, 38, "Base Items", navigate);
}
void directorySingleCrafts(string& navigate){
    string items[] = {
        "Bamboo Block",
        "Blaze Powder",
        "Bonemeal",
        "Brewing Stand",
        "Bucket",
        "Bundle",
        "Cauldron",
        "Chiseled Sandtone - Can be made with Stonecutter",
        "Chiseled Stone Brick - Can be made with Stonecutter",
        "Clay Block",
        "Coal Block",
        "Cobblestone Slab - Can be made with Stonecutter",
        "Cobblestone Stair - Can be made with Stonecutter",
        "Cobblestone Wall - Can be made with Stonecutter",
        "Compass",
        "Concrete Powder",
        "Copper Bars",
        "Copper Block",
        "Copper Nugget",
        "Copper Trapdoor",
        "Cut Sandstone - Can be made with Stonecutter",
        "Cut Sandstone Slab - Can be made with Stonecutter",
        "Dropper",
        "Furnace",
        "Glass Bottle",
        "Glowstone",
        "Gold Block",
        "Hay Bale",
        "Heavy Weighted Pressure Plate",
        "Iron Bars",
        "Iron Block",
        "Iron Door",
        "Iron Ingot",
        "Iron Nugget",
        "Iron Trapdoor",
        "Lead",
        "Light Weighted Pressure Plate",
        "Lightning Rod",
        "Minecart",
        "Paper",
        "Planks (Wood type not differentiated)",
        "Redstone Block",
        "Sandstone",
        "Sandstone Slab - Can be made with Stonecutter",
        "Sandstone Stair - Can be made with Stonecutter",
        "Sandstone Wall - Can be made with Stonecutter",
        "Shears",
        "Slime Block",
        "Stick (When you have access to Bamboo)",
        "Stone Brick - Can be made with Stonecutter",
        "Stone Brick Slab - Can be made with Stonecutter",
        "Stone Brick Stair - Can be made with Stonecutter",
        "Stone Brick Wall - Can be made with Stonecutter",
        "Stone Pressure Plate",
        "Stone Slab - Can be made with Stonecutter",
        "Stone Stair - Can be made with Stonecutter",
        "Stonecutter",
        "Sugar",
        "Wool"
    };
    displayDirectory (items, 59, "Single Crafts", navigate);
}
void directoryMultiCrafts(string& navigate){
    string items [] {
        "Activator Rail",
        "Anvil",
        "Bamboo Planks (Only differentiated Wood type due to different recipe)",
        "Barrel",
        "Bed",
        "Beehive",
        "Blast Furnace",
        "Boat",
        "Book",
        "Bookshelf",
        "Bow",
        "Button",
        "Campfire",
        "Cartography Table",
        "Chest",
        "Chiseled Bookshelf",
        "Chiseled Copper - Better with Stonecutter",
        "Composter",
        "Copper Bulb",
        "Copper Chain",
        "Copper Grate - Better with Stonecutter",
        "Copper Ingot",
        "Crafter",
        "Crafting Table",
        "Cut Copper Block - Better with Stonecutter",
        "Cut Copper Slab - Better with Stonecutter",
        "Cut Copper Stair - Better with Stonecutter",
        "Detector Rail",
        "Dispenser",
        "Door",
        "Fence",
        "Fence Gate",
        "Firework Rocket"
        "Fishing Rod",
        "Fletching Table",
        "Glass Panes",
        "Grindstone",
        "Honey Block",
        "Hopper",
        "Hopper Minecart",
        "Iron Chain",
        "Jukebox",
        "Ladder",
        "Lectern",
        "Lever",
        "Lodestone",
        "Loom",
        "Note Block",
        "Observer",
        "Piston",
        "Powered Rail",
        "Rail",
        "Redstone Comparator",
        "Redstone Repeater",
        "Redstone Torch",
        "Scaffolding",
        "Shield",
        "Shulker Box",
        "Sign",
        "Smithing Table",
        "Smoker",
        "Stained Glass",
        "Stained Glass Panes",
        "Stick",
        "Sticky Piston",
        "Target Block",
        "Tinted Glass",
        "TNT",
        "Tripwire Hook",
        "Wooden Pressure Plate",
        "Wooden Slab",
        "Wooden Stair",
        "Wooden Trapdoor"
    };
    displayDirectory (items, 73, "Multi-Crafts", navigate);
}
void directorySmelts(string& navigate){
    string items[] {
        "Clay Ball -> Brick",
        "Clay Block -> Terracotta",
        "Cobblestone -> Stone",
        "Log -> Charcoal",
        "Sand -> Glass",
        "Netherrack -> Nether Brick",
        "Basalt -> Smooth Basalt",
        "Sandstone -> Smooth Sandstone",
        "Stone -> Smooth Stone"
    };
    displayDirectory (items, 9, "Smelting Recipes", navigate);
}
void directoryObtainables(string& navigate){
    string items[] {
        "Honey Bottle -> Bee Nest/Beehive + Glass Bottle.",
        "Honeycomb -> Bee Nest/Beehive + Shears",
        "Lava Bucket -> Lava Source + Bucket",
        "Water Bottle -> Water Source + Glass Bottle",
        "Water Bucket -> Water Source + Bucket"
    };
    displayDirectory (items, 5, "Obtainables", navigate);
}

int main() {

    populateRecipes();
    populateBaseItems();
    populateSmelts();

    string choice;
    string selection;
    string navigate;
    bool running = true;

    while (running) {
    do {
        cout << "\nWelcome to my Minecraft Converter. Please select an option: " << endl;
        cout << "1. Stack Converter" << endl;
        cout << "2. Recipe Converter" << endl;
        cout << "3. Directory" << endl;
        cout << "0. Quit" << endl;
        cin >> choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        // TODO: CODE IN A GLOBAL QUIT FUNCTION SO THAT YOU CAN SAY STOP OR QUIT AT ANYTIME TO END THE PROGRAM NOT JUST AT THE MAIN MENU

        if (choice == "1" || choice == "stack") {
            string again;
            do{
                string itemName;

                cout << "What item are you converting? ";
                cin.ignore();
                getline(cin, itemName);

                unsigned int itemAmount;
                bool validInput = false;
                do{
                    cout << "How much " << itemName << " are you converting? ";
                    cin >> itemAmount;
                    if (cin.fail()) {
                        cin.clear(); // clears the error flag
                        cin.ignore(1000, '\n'); // discards the bad input from the buffer
                        cout << "\nThat number is too large. Please enter a valid quantity." << endl << endl;
                        continue; // loops back to the start of the do while
                }
                else { 
                    validInput = true;
                }
            } while (!validInput);

                displayQuantity(itemName, itemAmount);
                cout << "\nNote: This tool is currently only accurate for items that stack into stacks of 64." << endl;
                do {
                    cout << "\nWould you like to convert something else? (yes/no): ";
                    cin >> again;
                    transform(again.begin(), again.end(), again.begin(), ::tolower);

                    if (again == "0" || again == "quit" || again == "stop") {
                    cout << "Goodbye!" << endl;
                    running = false;
                    break;
                }
                if (again != "yes" && again != "y" && again != "no" && again != "n") {
                    cout << "\nI'm sorry, my database is limited. You must enter the right selection." << endl; // this requires a proper selection rather than immediately going back to the main menu.
                }
            } while (again != "yes" && again != "y" && again != "no" && again != "n" && again != "0" && again != "quit" && again != "stop");
        } while (again == "yes" || again == "y");
    }
        else if (choice == "2" || choice == "recipe") {
            cout << "This feature is currently under construction. Please check back later." << endl;
        }
        else if (choice == "3" || choice == "directory") {
            do {
                cout << "\nWelcome to the Item Directory. Which Category do you want to see?" << endl;
                cout << "1. Base Items" << endl;
                cout << "2. Smelting" << endl;
                cout << "3. Obtainables" << endl;
                cout << "4. Single Crafts" << endl;
                cout << "5. Multi-Crafts" << endl;
                cout << "6. Back to Main Menu" << endl;
                cout << "0. Quit" << endl;
                cin >> selection;
                transform(selection.begin(), selection.end(), selection.begin(), ::tolower);

                if (selection == "1" || selection == "base") {
                    directoryBaseItems(navigate);
                    if (navigate == "b" || navigate == "back") break;
                    selection = "";
                }
                else if (selection == "2" || selection == "smelt" || selection == "smelting") {
                    directorySmelts(navigate);
                    if (navigate == "b" || navigate == "back") break;
                    selection = "";
                }
                else if (selection == "3" || selection == "obtainable" || selection == "obtainables"){
                    directoryObtainables(navigate);
                    if (navigate == "b" || navigate == "back") break;
                    selection = "";
                }
                else if (selection == "4" || selection == "single"){
                    directorySingleCrafts(navigate);
                    if (navigate == "b" || navigate == "back") break;
                    selection = "";
                }
                else if (selection == "5" || selection == "multi"){
                    directoryMultiCrafts(navigate);
                    if (navigate == "b" || navigate == "back") break;
                    selection = "";
                }
                else if (selection == "6" || selection == "back"){
                    break;
                }
                else if (selection == "0" || selection== "quit" || selection == "stop") {
                    cout << "Goodbye!" << endl << endl;
                    running = false;
                }
                else{
                    cout << "I'm sorry, my database is limited. You must enter the right selection. Double check that you only entered in the number or first word of your menu selection." << endl << endl;
                }
            } while (selection != "1" && selection != "base" && selection != "2" && selection != "smelting" && selection != "smelt" && selection != "3" && selection != "obtainable" && selection != "obtainables" && selection != "4" && selection != "single" && selection != "5" && selection != "multi" && selection != "6" && selection != "back" && selection != "0" && selection != "quit" && selection != "stop");
        }
        else if (choice == "0" || choice == "quit" || choice == "stop") {
            cout << "Goodbye!" << endl << endl;
            running = false;
        }
        else {
            cout << "I'm sorry, my database is limited. You must enter the right selection." << endl << endl; // Cheeky I, Robot reference there. Shoutouts if you got it without this comment.
        } 
    } while (choice != "1" && choice != "stack" && choice != "2" && choice != "recipe" && choice != "3" && choice != "directory" && choice != "0" && choice != "quit" && choice != "stop");
    }
    return 0;
}