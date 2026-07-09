#include "recipes.h"

vector<Recipe> recipes;
vector<BaseItem> baseItems;
vector<string> woodTypes = {
    "oak", "spruce", "birch", "jungle", "acacia", "dark oak", "crimson", "warped", "mangrove", "cherry", "bamboo", "pale oak", 
};
vector<string> supportedWoodTypes = {
    "oak", 
    "spruce",
    "birch",
    "jungle",
    "acacia",
    "dark oak",
    "crimson",
    "warped",
    "mangrove",
    "cherry",
    "bamboo",
    "pale oak"
};

void populateBaseItems(){
    BaseItem item;

    item = BaseItem();
    item.name = "Amethyst Shard";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Bamboo";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Basalt";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Blaze Rod";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Bone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Bone Block";
    item.stackSize = SIXTY_FOUR;
    item.requiresNether = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Clay Ball";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Clay Block";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Coal";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Cobblestone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Copper Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Copper Nugget";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Diamond";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Dye";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    /*This will eventually be expanded to all 16 colors as well as their recipes to craft them*/
    
    item = BaseItem();
    item.name = "Ender Pearl";
    item.stackSize = SIXTEEN;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Flint";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Glass";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Glowstone";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Glowstone Dust";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Gold Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Gravel";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Gunpowder";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Honeycomb";
    item.stackSize = SIXTY_FOUR;
    item.requiresBees = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Iron Ingot";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Iron Nugget";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Leather";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Nether Quartz";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Netherrack";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Redstone Dust";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Sand";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Sandstone";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Shulker Shell";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Slimeball";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Stone";
    item.stackSize = SIXTY_FOUR;
    item.requiresSilkTouch = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "String";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Sugar Cane";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Terracotta";
    item.stackSize = SIXTY_FOUR;
    item.requiresBadlands = true;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Wheat";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Wool";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
    
    item = BaseItem();
    item.name = "Oak Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Spruce Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Birch Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item); 

    item = BaseItem();
    item.name = "Jungle Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Acacia Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Dark Oak Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Crimson Stem";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Warped Stem";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Mangrove Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Cherry Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);

    item = BaseItem();
    item.name = "Pale Oak Log";
    item.stackSize = SIXTY_FOUR;
    baseItems.push_back(item);
}

void populateRecipes(){
    Recipe recipe;

    // first all the Stonecutter Recipes

    recipe.reset();
    recipe.name = "Chiseled Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cobblestone Slab";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cobblestone Stair";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cobblestone Wall";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone Stair";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone Wall";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    // Then all the Multi Craft Stonecutter recipes

    recipe.reset();
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Copper Grate";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Block";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = SIXTY_FOUR;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 8;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresStonecutter = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    //Regular Single Crafts now

    recipe.reset();
    recipe.name = "Bamboo Block";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Blaze Powder";
    recipe.ingredients[0].name = "Blaze Rod";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Bonemeal";
    recipe.ingredients[0].name = "Bone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Brewing Stand";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Blaze Rod";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Bucket";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Bundle";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Leather";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Cauldron";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Chiseled Stone Brick";
    recipe.ingredients[0].name = "Stone Brick Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Clay Block";
    recipe.ingredients[0].name = "Clay Ball";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Coal Block";
    recipe.ingredients[0].name = "Coal";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Cobblestone Slab";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Cobblestone Stair";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Cobblestone Wall";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Compass";
    recipe.ingredients[0].name = "Redstone Dust";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
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
        
    recipe.reset();
    recipe.name = "Copper Bars";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Copper Block";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Copper Nugget";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Copper Trapdoor";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Cut Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Dropper";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Furnace";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Glass Bottle";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Honey Bottle";
    recipe.ingredients[0].name = "Glass Bottle";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.requiresBees = true;
    recipe.isObtainable = true;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Glowstone";
    recipe.ingredients[0].name = "Glowstone Dust";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Gold Block";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Hay Bale";
    recipe.ingredients[0].name = "Wheat";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Heavy Weighted Pressure Plate";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Iron Bars";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Iron Block";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Iron Door";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Iron Ingot";
    recipe.ingredients[0].name = "Iron Nugget";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Iron Nugget";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Iron Trapdoor";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Lead";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Light Weighted Pressure Plate";
    recipe.ingredients[0].name = "Gold Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Lightning Rod";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Minecart";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Paper";
    recipe.ingredients[0].name = "Sugar Cane";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Planks";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Redstone Block";
    recipe.ingredients[0].name = "Redstone Dust";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone Slab";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone Stair";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sandstone Wall";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Shears";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Slime Block";
    recipe.ingredients[0].name = "Slimeball";
    recipe.ingredients[0].quantity = 9;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stick";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipe.requiresBamboo = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Stone Brick Slab";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Stair";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Brick Wall";
    recipe.ingredients[0].name = "Stone Brick";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Pressure Plate";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Slab";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone Stair";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sugar";
    recipe.ingredients[0].name = "Sugar Cane";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Wool";
    recipe.ingredients[0].name = "String";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    // Regular Multi Crafts now

    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Anvil";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Iron Block";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Bamboo Planks";
    recipe.ingredients[0].name = "Bamboo Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Barrel";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Wooden Slab";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Bed";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Wool";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Beehive";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Honeycomb";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Boat";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Book";
    recipe.ingredients[0].name = "Leather";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Bookshelf";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Book";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Bow";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Button";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Cartography Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Chest";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Chiseled Bookshelf";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Wooden Slab";
    recipe.ingredients[1].quantity = 3;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Chiseled Copper";
    recipe.ingredients[0].name = "Cut Copper Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Composter";
    recipe.ingredients[0].name = "Wooden Slab";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Copper Bulb";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredients[2].name = "Blaze Rod";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Copper Chain";
    recipe.ingredients[0].name = "Copper Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Copper Nugget";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Copper Grate";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Copper Ingot";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 9;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Crafting Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Block";
    recipe.ingredients[0].name = "Copper Block";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Slab";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Cut Copper Stair";
    recipe.ingredients[0].name = "Cut Copper Block";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    
    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Door"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true; // This is what lets it differentiate the wood types.
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Fence"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Fence Gate"; // currently doesn't differentiate wood types, but you need matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Firework"; // This is only showing for flight level 1 fireworks. Will add the other levels later, but likely not the rest of firework crafting outside of whats needed for elytra travel
    recipe.ingredients[0].name = "Gunpowder";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Paper";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Fishing Rod";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Fletching Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Flint";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Glass Pane";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Honey Block";
    recipe.ingredients[0].name = "Honey Bottle";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Hopper";
    recipe.ingredients[0].name = "Chest";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 5;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Hopper Minecart";
    recipe.ingredients[0].name = "Hopper";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Minecart";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Iron Chain";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Iron Nugget";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Jukebox";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Diamond";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
        
    recipe.reset();
    recipe.name = "Ladder";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 7;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Lectern";
    recipe.ingredients[0].name = "Wooden Slab";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Bookshelf";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Lever";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Lodestone"; // if playing in an older version you might need Netherite ingot instead of iron, but this will be accurate as of 1.21.5
    recipe.ingredients[0].name = "Chiseled Stone Brick";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Loom";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Note Block";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
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
            
    recipe.reset();
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
            
    recipe.reset();
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
            
    recipe.reset();
    recipe.name = "Rail";
    recipe.ingredients[0].name = "Iron Ingot";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
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
            
    recipe.reset();
    recipe.name = "Redstone Repeater";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredients[1].name = "Redstone Torch";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredients[2].name = "Redstone Dust";
    recipe.ingredients[2].quantity = 1;
    recipe.ingredientCount = 3;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Redstone Torch";
    recipe.ingredients[0].name = "Stick";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
            
    recipe.reset();
    recipe.name = "Scaffolding";
    recipe.ingredients[0].name = "Bamboo";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "String";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Shield";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Shulker Box";
    recipe.ingredients[0].name = "Chest";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Shulker Shell";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sign"; // Doesn't differentiate wood types yet, but matching planks
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Smithing Table";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Iron Ingot";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Smoker";
    recipe.ingredients[0].name = "Furnace";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Log";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stained Glass"; // consolidates all colors for now.
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 8;
    recipe.ingredients[1].name = "Dye";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 8;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stained Glass Panes";
    recipe.ingredients[0].name = "Stained Glass";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 16;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stick";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Sticky Piston";
    recipe.ingredients[0].name = "Piston";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Slimeball";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Target Block";
    recipe.ingredients[0].name = "Hay Bale";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Redstone Dust";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Tinted Glass";
    recipe.ingredients[0].name = "Glass";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredients[1].name = "Amethyst Shard";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "TNT";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Gunpowder";
    recipe.ingredients[1].quantity = 5;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    
    recipe.reset();
    recipe.name = "Wooden Pressure Plate";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Wooden Slab";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Wooden Stairs";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Wooden Trapdoor";
    recipe.ingredients[0].name = "Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Wood";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipe.isWoodType = true;
    recipes.push_back(recipe);
    
    //Oak Variants
    recipe.reset();
    recipe.name = "Oak Boat";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Button";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Door";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Fence";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Fence Gate";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Planks";
    recipe.ingredients[0].name = "Oak Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Pressure Plate";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Sign";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Slab";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Oak Stairs";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Trapdoor";
    recipe.ingredients[0].name = "Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Oak Wood";
    recipe.ingredients[0].name = "Oak Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

// Spruce Variants
    recipe.reset();
    recipe.name = "Spruce Boat";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Button";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Door";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Fence";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Fence Gate";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Planks";
    recipe.ingredients[0].name = "Spruce Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Pressure Plate";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Sign";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Slab";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Spruce Stairs";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Trapdoor";
    recipe.ingredients[0].name = "Spruce Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Spruce Wood";
    recipe.ingredients[0].name = "Spruce Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Birch Variants
    recipe.reset();
    recipe.name = "Birch Boat";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Button";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Door";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Fence";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Fence Gate";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Planks";
    recipe.ingredients[0].name = "Birch Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Pressure Plate";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Sign";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Slab";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Birch Stairs";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Trapdoor";
    recipe.ingredients[0].name = "Birch Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Birch Wood";
    recipe.ingredients[0].name = "Birch Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Jungle Variants
    recipe.reset();
    recipe.name = "Jungle Boat";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Button";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Door";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Fence";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Fence Gate";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Planks";
    recipe.ingredients[0].name = "Jungle Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Pressure Plate";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Sign";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Slab";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Jungle Stairs";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Trapdoor";
    recipe.ingredients[0].name = "Jungle Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Jungle Wood";
    recipe.ingredients[0].name = "Jungle Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Acacia Variants
    recipe.reset();
    recipe.name = "Acacia Boat";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Button";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Door";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Fence";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Fence Gate";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Planks";
    recipe.ingredients[0].name = "Acacia Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Pressure Plate";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Sign";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Slab";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Acacia Stairs";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Trapdoor";
    recipe.ingredients[0].name = "Acacia Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Acacia Wood";
    recipe.ingredients[0].name = "Acacia Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Dark Oak Variants
    recipe.reset();
    recipe.name = "Dark Oak Boat";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Button";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Door";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Fence";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Fence Gate";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Planks";
    recipe.ingredients[0].name = "Dark Oak Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Pressure Plate";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Sign";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Slab";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Dark Oak Stairs";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Trapdoor";
    recipe.ingredients[0].name = "Dark Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Dark Oak Wood";
    recipe.ingredients[0].name = "Dark Oak Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Nether Variants

    recipe.reset();
    recipe.name = "Crimson Button";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Door";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Fence";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Fence Gate";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Planks";
    recipe.ingredients[0].name = "Crimson Stem";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Pressure Plate";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Sign";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Slab";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Crimson Stairs";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Trapdoor";
    recipe.ingredients[0].name = "Crimson Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Crimson Hyphae";
    recipe.ingredients[0].name = "Crimson Stem";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Button";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Door";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Fence";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Fence Gate";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Planks";
    recipe.ingredients[0].name = "Warped Stem";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Pressure Plate";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Sign";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Slab";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Warped Stairs";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Trapdoor";
    recipe.ingredients[0].name = "Warped Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Warped Hyphae";
    recipe.ingredients[0].name = "Warped Stem";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Mangrove Variants
    recipe.reset();
    recipe.name = "Mangrove Boat";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Button";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Door";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Fence";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Fence Gate";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Planks";
    recipe.ingredients[0].name = "Mangrove Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Pressure Plate";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Sign";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Slab";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Mangrove Stairs";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Trapdoor";
    recipe.ingredients[0].name = "Mangrove Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Mangrove Wood";
    recipe.ingredients[0].name = "Mangrove Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Cherry Variants
    recipe.reset();
    recipe.name = "Cherry Boat";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Button";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Door";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Fence";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Fence Gate";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Planks";
    recipe.ingredients[0].name = "Cherry Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Pressure Plate";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Sign";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Slab";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Cherry Stairs";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Trapdoor";
    recipe.ingredients[0].name = "Cherry Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Cherry Wood";
    recipe.ingredients[0].name = "Cherry Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    //Bamboo Variants
    recipe.reset();
    recipe.name = "Bamboo Boat";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Button";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Door";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Fence";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Fence Gate";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Mosaic";
    recipe.ingredients[0].name = "Bamboo Slab";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Mosaic Slab";
    recipe.ingredients[0].name = "Bamboo Mosaic";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Mosaic Stairs";
    recipe.ingredients[0].name = "Bamboo Mosaic";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Pressure Plate";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Sign";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Slab";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Bamboo Stairs";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Bamboo Trapdoor";
    recipe.ingredients[0].name = "Bamboo Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    // Pale Oak Variants
    recipe.reset();
    recipe.name = "Pale Oak Boat";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 5;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SINGLE;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Button";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Door";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Fence";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 2;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Fence Gate";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 4;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Planks";
    recipe.ingredients[0].name = "Pale Oak Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Pressure Plate";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 2;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Sign";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredients[1].name = "Stick";
    recipe.ingredients[1].quantity = 1;
    recipe.ingredientCount = 2;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTEEN;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Slab";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 3;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 6;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);    

    recipe.reset();
    recipe.name = "Pale Oak Stairs";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 4;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Trapdoor";
    recipe.ingredients[0].name = "Pale Oak Planks";
    recipe.ingredients[0].quantity = 6;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 2;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);

    recipe.reset();
    recipe.name = "Pale Oak Wood";
    recipe.ingredients[0].name = "Pale Oak Log";
    recipe.ingredients[0].quantity = 4;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 3;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
}

void populateSmelts(){
    Recipe recipe;

    recipe.reset();
    recipe.name = "Brick";
    recipe.ingredients[0].name = "Clay Ball";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Charcoal";
    recipe.ingredients[0].name = "Log";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
   recipe.reset();
     recipe.name = "Glass";
    recipe.ingredients[0].name = "Sand";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
   recipe.reset();
     recipe.name = "Nether Brick";
    recipe.ingredients[0].name = "Netherrack";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Smooth Basalt";
    recipe.ingredients[0].name = "Basalt";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Smooth Sandstone";
    recipe.ingredients[0].name = "Sandstone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Smooth Stone";
    recipe.ingredients[0].name = "Stone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
    recipe.name = "Stone";
    recipe.ingredients[0].name = "Cobblestone";
    recipe.ingredients[0].quantity = 1;
    recipe.ingredientCount = 1;
    recipe.yieldAmount = 1;
    recipe.isSmelt = true;
    recipe.stackSize = SIXTY_FOUR;
    recipes.push_back(recipe);
    
    recipe.reset();
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
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower); // takes inputted recipe name and makes it all lowercase

    for (int i = 0; i < recipes.size(); ++i) {
        string lowerRecipe = recipes[i].name;
        transform(lowerRecipe.begin(), lowerRecipe.end(), lowerRecipe.begin(), ::tolower); //takes Recipe in database and makes it all lowercase

        if (lowerRecipe == lowerInput) {
            if (!recipes[i].isAvailable()) continue;  // uses Recipe's member function instead
            return i;
        }
    }
    return -1; // otherwise returns an index that means not found
}

int findBaseItem(string itemName) {
    string lowerInput = itemName;
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower); // takes inputted name and makes it all lowercase

    for (int i = 0; i < baseItems.size(); ++i) {
        string lowerBaseItem = baseItems[i].name;
        transform(lowerBaseItem.begin(), lowerBaseItem.end(), lowerBaseItem.begin(), ::tolower); //takes name in database and makes it all lowercase

        if (lowerBaseItem == lowerInput) {
            if (!baseItems[i].isAvailable()) continue;
            if (baseItems[i].name == "Wool" && !woolFromSheep) continue; //this allows the string to wool recipe to be used.
            return i; // if the input (that's been lowercased) matches the recipe name (thats also been lowercased) return the index it was found
        }
    }
    return -1; // otherwise returns an index that means not found
}

StackSize getStackSize(string itemName, bool& found) {
    string lowerInput = itemName;
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);
    for (int i = 0; i < baseItems.size(); ++i) {
        string lower = baseItems[i].name;
        transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
        if (lower == lowerInput) {
            found = true;
            return baseItems[i].stackSize;
        }
    }
    for (int i = 0; i < recipes.size(); ++i) {
        string lower = recipes[i].name;
        transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
        if (lower == lowerInput) {
            found = true;
            return recipes[i].stackSize;
        }
    }
    found = false;
    return SIXTY_FOUR;
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
            cout << "\nI'm sorry, my database is limited. You must enter the right selection. Please check the spelling of " << itemName << " and try again. It's possible you don't possess the prerequisites for " << itemName << " currently." << endl; 
        }

    }
}