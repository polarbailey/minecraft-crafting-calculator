#include "recipes.h"

vector<Recipe> recipes;
vector<BaseItem> baseItems;

void populateBaseItems(){
    BaseItem item;

    item = {};
    item.name = "Amethyst Shard";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = {};
    item.name = "Bamboo";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = {};
    item.name = "Basalt";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Blaze Rod";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Bone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Bone Block";
    item.stackSize = SIXTY_FOUR;
    item.requiresNether = true;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Clay Ball";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Clay Block";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Coal";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Cobblestone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Copper Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Copper Nugget";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Diamond";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Dye";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    /*This will eventually be expanded to all 16 colors as well as their recipes to craft them*/
    
    item = {};
    item.name = "Ender Pearl";
    item.stackSize = SIXTEEN;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Flint";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Glass";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Glowstone";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Glowstone Dust";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Gold Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Gravel";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Gunpowder";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = {};
    item.name = "Honeycomb";
    item.stackSize = SIXTY_FOUR;
    item.requiresBees = true;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Iron Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Iron Nugget";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Leather";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    /*Will eventually be expanded to all wood types*/

    item = {};
    item.name = "Nether Quartz";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Netherrack";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Redstone Dust";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Sand";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Sandstone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Shulker Shell";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Slimeball";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Stone";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch;
    baseItems.push_back(item);
    
    item = {};
    item.name = "String";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Sugar Cane";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = {};
    item.name = "Terracotta";
    item.stackSize = SIXTY_FOUR;
    item.requiresBadlands = true;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Wheat";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = {};
    item.name = "Wool";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
}

void populateRecipes(){
    Recipe recipe;

    // first all the Stonecutter Recipes

    recipe = {};
    recipe.name = "Chiseled Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe = {};
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cobblestone Slab";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cobblestone Stiar";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cobblestone Wall";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone Stair";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone Wall";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    // Then all the Multi Craft Stonecutter recipes

    recipe = {};
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe = {};
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Copper Grate";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Block";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = SIXTY_FOUR;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 8;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    //Regular Single Crafts now

    recipe = {};
    recipe.name = "Bamboo Block";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Blaze Powder";
    recipe.ingredients[0].name = "Blaze Rod";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Bonemeal";
    recipe.ingredients[0].name = "Bone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Brewing Stand";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Blaze Rod";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Bucket";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Bundle";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Leather";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Cauldron";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone Brick Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Clay Block";
    recipe.ingredients[0].name = "Clay Ball";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Coal Block";
    recipe.ingredients[0].name = "Coal";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Cobblestone Slab";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Cobblestone Stair";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Cobblestone Wall";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Compass";
    recipe.ingredients[0].name = "Redstone Dust";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
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
        
    recipe = {};
    recipe.name = "Copper Bars";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Copper Block";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Copper Nugget";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Copper Trapdoor";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Cut Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Dropper";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Furnace";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Glass Bottle";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Honey Bottle";
    recipe.ingredients[0].name = "Glass Bottle";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresBees = true;
    recipe.isObtainable = true;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Glowstone";
    recipe.ingredients[0].name = "Glowstone Dust";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Gold Block";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Hay Bale";
    recipe.ingredients[0].name = "Wheat";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Heavy Weighted Pressure Plate";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Iron Bars";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Iron Block";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Iron Door";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Iron Ingot";
    recipe.ingredients[0].name = "Iron Nugget";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Iron Nugget";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Iron Trapdoor";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe = {};
    recipe.name = "Lead";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Light Weighted Pressure Plate";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Lightning Rod";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Minecart";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Paper";
    recipe.ingredients[0].name = "Sugar Cane";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Planks";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Redstone Block";
    recipe.ingredients[0].name = "Redstone Dust";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone Stair";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sandstone Wall";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Shears";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Slime Block";
    recipe.ingredients[0].name = "Slimeball";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stick";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipe.requiresBamboo = true;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe = {};
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Pressure Plate";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sugar";
    recipe.ingredients[0].name = "Sugar Cane";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Wool";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    // Regular Multi Crafts now

    recipe = {};
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
    
    recipe = {};
    recipe.name = "Anvil";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Iron Block";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Bamboo Planks";
    recipe.ingredients[0].name = "Bamboo Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Barrel";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Wooden Slab";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Bed";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Wool";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Beehive";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Honeycomb";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
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
    
    recipe = {};
    recipe.name = "Boat";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Book";
    recipe.ingredients[0].name = "Leather";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Bookshelf";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Book";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Bow";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Button";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
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
    
    recipe = {};
    recipe.name = "Cartography Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Chest";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Chiseled Bookshelf";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Wooden Slab";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Cut Copper Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Composter";
    recipe.ingredients[0].name = "Wooden Slab";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
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
    
    recipe = {};
    recipe.name = "Copper Chain";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Copper Nugget";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Copper Grate";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Copper Ingot";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
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
    
    recipe = {};
    recipe.name = "Crafting Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Block";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Cut Cupper Block";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
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
    
    recipe = {};
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
    
    recipe = {};
    recipe.name = "Door"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Fence"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Fence Gate"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Firework"; // This is only showing for flight level 1 fireworks. Will add the other levels later, but likely not the rest of firework crafting outside of whats needed for elytra travel
    recipe.ingredients[0].name = "Gunpowder";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Fishing Rod";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Fletching Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Flint";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Glass Pane";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
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
    
    recipe = {};
    recipe.name = "Honey Block";
    recipe.ingredients[0].name = "Honey Bottle";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Hopper";
    recipe.ingredients[0].name = "Chest";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 5;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Hopper Minecart";
    recipe.ingredients[0].name = "Hopper";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Minecart";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Iron Chain";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Nugget";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Jukebox";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Diamond";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe = {};
    recipe.name = "Ladder";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Lectern";
    recipe.ingredients[0].name = "Wooden Slab";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Bookshelf";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Lever";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Lodestone"; // if playing in an older version you might need Netherite ingot instead of iron, but this will be accurate as of 1.21.5
    recipe.ingredients[0].name = "Chiseled Stone Brick";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Loom";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Note Block";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
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
            
    recipe = {};
    recipe.name = "Piston";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Planks";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredients[2].name = "Iron Ingot";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredients[3].name = "Redstone Dust";
    recipe.ingredients[3].quantity = 1;
    recipe.ingredientCount = 4;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Powered Rail";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[2].name = "Redstone Dust";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Rail";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
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
            
    recipe = {};
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
            
    recipe = {};
    recipe.name = "Redstone Torch";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe = {};
    recipe.name = "Scaffolding";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Shield";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Shulker Box";
    recipe.ingredients[0].name = "Chest";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Shulker Shell";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sign"; // Doesn't differentiate wood types yet, but matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Smithing Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Smoker";
    recipe.ingredients[0].name = "Furnace";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Log";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stained Glass"; // consolidates all colors for now.
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Dye";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 8;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stained Glass Panes";
    recipe.ingredients[0].name = "Stained Glass";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stick";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Sticky Piston";
    recipe.ingredients[0].name = "Piston";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Slimeball";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Target Block";
    recipe.ingredients[0].name = "Hay Bale";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Tinted Glass";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Amethyst Shard";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "TNT";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Gunpowder";
    recipe.ingredients[1].quantity = 5;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Tripwire Hook";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[2].name = "Planks";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Wooden Door";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Wooden Pressure Plate";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Wooden Slab";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Wooden Stair";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Wooden Trapdoor";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
}

void populateSmelts(){
    Recipe recipe;

    recipe = {};
    recipe.name = "Brick";
    recipe.ingredients[0].name = "Clay Ball";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Charcoal";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
   recipe = {};
     recipe.name = "Glass";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
   recipe = {};
     recipe.name = "Nether Brick";
    recipe.ingredients[0].name = "Netherrack";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Smooth Basalt";
    recipe.ingredients[0].name = "Basalt";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Smooth Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Smooth Stone";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Stone";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe = {};
    recipe.name = "Terracotta";
    recipe.ingredients[0].name = "Clay Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
};

int findRecipe(string itemName) {
    string lowerInput = itemName;
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

    for (int i = 0; i < recipes.size(); ++i) {
        string lowerRecipe = recipes[i].name;
        transform(lowerRecipe.begin(), lowerRecipe.end(), lowerRecipe.begin(), ::tolower);

        if (lowerRecipe == lowerInput) {
            cout << "Debug - found: " << recipes[i].name << endl;
            cout << "  requiresBamboo: " << recipes[i].requiresBamboo << endl;
            cout << "  requiresSilkTouch: " << recipes[i].requiresSilkTouch << endl;
            cout << "  requiresStonecutter: " << recipes[i].requiresStonecutter << endl;
            cout << "  requiresBadlands: " << recipes[i].requiresBadlands << endl;
            cout << "  requiresNether: " << recipes[i].requiresNether << endl;
            cout << "  hasBamboo: " << hasBamboo << endl;
            cout << "  hasSilkTouch: " << hasSilkTouch << endl;
            cout << "  hasStonecutter: " << hasStonecutter << endl;
            cout << "  hasBadlands: " << hasBadlands << endl;
            cout << "  hasNether: " << hasNether << endl;

            if (recipes[i].requiresBamboo && !hasBamboo) { cout << "  >> Skipping: requiresBamboo" << endl; continue; }
            if (recipes[i].requiresSilkTouch && !hasSilkTouch) { cout << "  >> Skipping: requiresSilkTouch" << endl; continue; }
            if (recipes[i].requiresStonecutter && !hasStonecutter) { cout << "  >> Skipping: requiresStonecutter" << endl; continue; }
            if (recipes[i].requiresBadlands && !hasBadlands) { cout << "  >> Skipping: requiresBadlands" << endl; continue; }
            if (recipes[i].requiresNether && !hasNether) { cout << "  >> Skipping: requiresNether" << endl; continue; }

            cout << "  >> Accepted at index: " << i << endl;
            return i;
        }
    }
    cout << "Debug - no valid recipe found for: " << itemName << endl;
    return -1;
}
/*int findRecipe(string itemName) {
    string lowerInput = itemName;
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower); // takes inputted recipe name and makes it all lowercase

    for (int i = 0; i < recipes.size(); ++i) {
        string lowerRecipe = recipes[i].name;
        transform(lowerRecipe.begin(), lowerRecipe.end(), lowerRecipe.begin(), ::tolower); //takes Recipe in database and makes it all lowercase

        if (lowerRecipe == lowerInput) {
            if (recipes[i].requiresBamboo && !hasBamboo) continue;
            if (recipes[i].requiresSilkTouch && !hasSilkTouch) continue;
            if (recipes[i].requiresStonecutter && !hasStonecutter) continue;
            if (recipes[i].requiresBadlands && !hasBadlands) continue;
            if (recipes[i].requiresNether && !hasNether) continue;
            return i;
        }
    }
    return -1; // otherwise returns an index that means not found
}*/

int findBaseItem(string itemName) {
    string lowerInput = itemName;
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower); // takes inputted name and makes it all lowercase

    for (int i = 0; i < baseItems.size(); ++i) {
        string lowerBaseItem = baseItems[i].name;
        transform(lowerBaseItem.begin(), lowerBaseItem.end(), lowerBaseItem.begin(), ::tolower); //takes name in database and makes it all lowercase

        if (lowerBaseItem == lowerInput) {
            return i; // if the input (that's been lowercased) matches the recipe name (thats also been lowercased) return the index it was found
        }
    }
    return -1; // otherwise returns an index that means not found
}

StackSize getStackSize(string itemName) {
    int baseIndex = findBaseItem(itemName);
    if (baseIndex != -1){
        return baseItems[baseIndex].stackSize;
    }
    int recipeIndex = findRecipe(itemName);
    if (recipeIndex != -1) {
        return recipes[recipeIndex].stackSize;
    }
    return SIXTY_FOUR; //if it doesn't find the recipe it assumes a stack size of 64
}

void resolveRecipe(string itemName, unsigned int quantity, vector<string>& resultNames, vector<unsigned int>& resultQuantities){
    bool found = false;
    int baseIndex = findBaseItem(itemName);
    if (baseIndex != -1) {
        for (int i=0; i < resultNames.size(); ++i){
            if (baseItems[baseIndex].name == resultNames[i]){
               resultQuantities[i] += quantity; 
               found = true;
               break;
            }
        }
        if (!found){
            resultNames.push_back(baseItems[baseIndex].name);
            resultQuantities.push_back(quantity);
        }
    }
    else {
        int recipeIndex = findRecipe(itemName);
        if (recipeIndex != -1) {
            int craftsNeeded = ceil((double)quantity / recipes[recipeIndex].yieldAmount);
            for (int i = 0; i < recipes[recipeIndex].ingredientCount; ++i) {
                resolveRecipe(recipes[recipeIndex].ingredients[i].name, recipes[recipeIndex].ingredients[i].quantity * craftsNeeded, resultNames, resultQuantities);
            }
        }
        else{
            cout << "\nI'm sorry, my database is limited. You must enter the right selection. Please check the spelling of " << itemName << " and try again."<< endl; 
        }

    }
}