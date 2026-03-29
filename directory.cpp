#include "directory.h"

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
        "Wooden Door",
        "Wooden Pressure Plate",
        "Wooden Slab",
        "Wooden Stair",
        "Wooden Trapdoor"
    };
    displayDirectory (items, 74, "Multi-Crafts", navigate);
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