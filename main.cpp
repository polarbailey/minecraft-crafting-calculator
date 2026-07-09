#include <iostream>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>
#include "recipes.h"
#include "directory.h"

using namespace std;

bool hasBamboo = false;
bool hasSilkTouch = false;
bool hasStonecutter = false;
bool hasBadlands = false;
bool hasNether = false;
bool hasBees = false;
bool preferBambooSticks = false;
bool woolFromSheep = true;

StackSize stackSize;

bool getInput(string& input) {
    cout << endl;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    if (input == "quit" || input == "stop" || input == "0") {
        cout << "Goodbye!" << endl;
        exit(0);
    }
    return true;
}

bool getLineInput(string& input) {
    getline(cin, input);
    string lower = input;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    if (lower == "quit" || lower == "stop" || lower == "0") {
        cout << "Goodbye!" << endl;
        exit(0);
    }
    return true;
}

void displayQuantity(string itemName, unsigned int itemAmount, StackSize stackSize) {
    unsigned int doubleChests = itemAmount / (1458 * stackSize); // now this checks recipes and converts based on stack size
    unsigned int shulkers = (itemAmount % (1458 * stackSize)) / (27 * stackSize); // Amount of full shulkers that don't completely fill a double chest
    unsigned int remainder = itemAmount % (27 * stackSize); // total items not filling a full shulker
    unsigned int stacks = remainder / stackSize; // amount of full stacks that don't fill a full shulker
    unsigned int excess = remainder % stackSize; // amount of loose items

    cout << "\nFor " << itemAmount << " " << itemName << ", you will need " << endl;
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
        cout << " of ";
    }
    cout << itemName << "." << endl;
}

void displayQuantityNoAnim(string itemName, unsigned int itemAmount, StackSize stackSize) {
    unsigned int doubleChests = itemAmount / (1458 * stackSize); // now this checks recipes and converts based on stack size
    unsigned int shulkers = (itemAmount % (1458 * stackSize)) / (27 * stackSize); // Amount of full shulkers that don't completely fill a double chest
    unsigned int remainder = itemAmount % (27 * stackSize); // total items not filling a full shulker
    unsigned int stacks = remainder / stackSize; // amount of full stacks that don't fill a full shulker
    unsigned int excess = remainder % stackSize; // amount of loose items

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
        cout << " of ";
    }
    cout << itemName << "." << endl;
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
                getLineInput(itemName);

                unsigned int itemAmount;
                bool validInput = false;
                do{
                    cout << "How many " << itemName << " do you need? ";
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
                bool itemFound = false;
                StackSize itemStackSize = getStackSize(itemName, itemFound);
                if (!itemFound) {
                    cout << "\nI didn't find " << itemName << " in my database. This will assume " << itemName << " stacks to 64." << endl;
                    cout << "\nIf you believe this to be an error, check your spelling and try again." << endl;
                }
                this_thread::sleep_for(chrono::milliseconds(416));
                displayQuantity(itemName, itemAmount, itemStackSize);
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
            string itemName;
            string again;
            string answer;
            unsigned int quantity;
            int baseCheck;
            int recipeCheck;

            hasBamboo = false;
            hasSilkTouch = false;
            hasStonecutter = false;
            hasBadlands = false;
            hasNether = false;
            hasBees = false;
            preferBambooSticks = false;
            woolFromSheep = false;
            
            //first comes the boolean checker to see what recipes it will use

            cout << "\nWelcome to the Recipe Converter." << endl;
            this_thread::sleep_for(chrono::milliseconds(416));
            cout << "Before we begin, there are some qualifying questions you need to answer." << endl;
            this_thread::sleep_for(chrono::milliseconds(417));

            do {
                cout << "\nDo you have access to Bamboo? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer !="n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer !="n");
            if (answer == "y" || answer == "yes") {
                hasBamboo = true;
                do {
                    cout << "Do you prefer to use Bamboo or Planks for Sticks? (b/p): "; //this is to fix the issue with it always preferring bamboo for sticks if you say you have bamboo
                    cin >> answer;
                    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                    if (answer != "bamboo" && answer != "b" && answer != "planks" && answer !="p") {
                    cout << "Please answer with Bamboo or Planks (b/p)." << endl;
                    }
                } while (answer != "bamboo" && answer != "b" && answer != "planks" && answer !="p");
                if (answer == "bamboo" || answer == "b") preferBambooSticks = true;
            }
            do {
                cout << "\nDo you have access to Silk Touch? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer !="n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer !="n");
            if (answer == "y" || answer == "yes") hasSilkTouch = true;

            do {
                cout << "\nDo you have access to a Stonecutter? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer !="n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer !="n");
            if (answer == "y" || answer == "yes") hasStonecutter = true;
            
                do {
                cout << "\nDo you have access to a Badlands Biome? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer !="n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer !="n");
            if (answer == "y" || answer == "yes") hasBadlands = true;
            
            do {    
                cout << "\nDo you have access to the Nether? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer !="n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer !="n");
            if (answer == "y" || answer == "yes") hasNether = true;
            
            do {    
                cout << "\nDo you have access to Bees? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer != "n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer != "n");
            if (answer == "y" || answer == "yes") hasBees = true;

            do {
                cout << "\nDo you want to use String for Wool recipes? (y/n): ";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if (answer != "yes" && answer != "no" && answer != "y" && answer != "n") {
                    cout << "Please answer with y or n." << endl;
                }
            } while (answer != "yes" && answer != "no" && answer != "y" && answer != "n");
            if (answer == "y" || answer == "yes") woolFromSheep = false;       

            cin.ignore();
            do{
                do{
                    cout << "\nWhat item are you crafting?" << endl;
                    getLineInput(itemName);

                    baseCheck = findBaseItem(itemName);
                    recipeCheck = findRecipe(itemName);

                    if (baseCheck == -1 && recipeCheck == -1) {
                        cout << "\nI'm sorry, my database is limited. You must enter the right selection. Please check the spelling of " << itemName << " and try again. It's possible you don't possess the prerequisites for " << itemName << " currently." << endl;
                    }
                } while (baseCheck == -1 && recipeCheck == -1);

                // TODO: expand wood type dialogue to handle multi-material variants
                // e.g. Door (Iron/Wood), Trapdoor (Iron/Copper/Wood), etc.
                // If wood is selected, then ask generic or specific wood type
            
                // Now it will see if you want a specific wood type or generic if you choose an item 
                bool alreadySpecified = false;
                for (string w : woodTypes) {
                    if (itemName.find(w) != string::npos) {
                        alreadySpecified = true;
                        break;
                    }
                }

                if (recipeCheck != -1 && recipes[recipeCheck].isWoodType && !alreadySpecified) {
                    string typeChoice;
                    do {
                        string displayName = itemName;
                        string lowerDisplay = displayName;
                        transform(lowerDisplay.begin(), lowerDisplay.end(), lowerDisplay.begin(), ::tolower);
                        if (lowerDisplay.find("wooden") != string::npos) {
                            displayName = displayName.substr(7); // removes "Wooden "
                        }
                        cout << "\nWould you like the generic recipe for the " << displayName << " or a specific wood type? (g/s): ";
                        cout << endl;
                        cin >> typeChoice;
                        transform(typeChoice.begin(), typeChoice.end(), typeChoice.begin(), ::tolower);
                        if (typeChoice != "generic" && typeChoice != "g" && typeChoice != "specific" && typeChoice != "s") {
                            cout << "Please answer with generic or specific." << endl;
                        }
                    } while (typeChoice != "generic" && typeChoice != "g" && typeChoice != "specific" && typeChoice != "s");
                    cin.ignore();
                    if (typeChoice == "specific" || typeChoice == "s") {
                        string woodType;
                        bool validWood = false;
                        do{
                            cout << "\nWhich wood type would you like?" << endl;
                            getline (cin, woodType);
                            transform(woodType.begin(), woodType.end(), woodType.begin(), ::tolower);

                            //checking for any valid wood type first
                            bool knownWood = false;
                            for (string w : woodTypes) {
                                if (w == woodType) { knownWood = true; break; }
                            }

                            if (!knownWood) {
                                cout << "\nI'm sorry, my database is limited. You must enter the right selection." << endl; 
                            }
                            //checking if it's a wood type i've added yet.
                            else {
                                bool supported = false;
                                for (string w : supportedWoodTypes) {
                                    if (w == woodType) { supported = true; break; }
                                }
                                if (!supported) {
                                    cout << "\nI'm sorry that type is still under construction. Please choose a different type." << endl;
                                    cout << "Here's what are currently added: " << endl;
                                    for (int i = 0; i < supportedWoodTypes.size(); ++i) {
                                        cout << supportedWoodTypes[i];
                                        if (i < supportedWoodTypes.size() - 1) cout << ", ";
                                    }
                                    cout << endl;
                                }
                                else {
                                    validWood = true;
                                    string lowerItemName = itemName;
                                    transform(lowerItemName.begin(), lowerItemName.end(), lowerItemName.begin(), ::tolower);
                                    if (lowerItemName.find("wooden") != string::npos) {
                                        itemName = itemName.substr(7); // removes "Wooden " (7 characters including the space)
                                        itemName = woodType + " " + itemName;
                                    } else {
                                        itemName = woodType + " " + itemName;
                                    }
                                    if (woodType == "bamboo") {
                                        string lowerItemName = itemName;
                                        transform(lowerItemName.begin(), lowerItemName.end(), lowerItemName.begin(), ::tolower);
                                        if (lowerItemName.find("slab") != string::npos || lowerItemName.find("stair") != string::npos) {
                                            string mosaicAnswer;
                                            do {
                                                cout << "\nDo you want regular or mosaic " << itemName << "? (r/m): ";
                                                cin >> mosaicAnswer;
                                                transform(mosaicAnswer.begin(), mosaicAnswer.end(), mosaicAnswer.begin(), ::tolower);
                                                    if (mosaicAnswer != "regular" && mosaicAnswer != "mosaic" && mosaicAnswer != "r" && mosaicAnswer != "m") {
                                                        cout << "Please enter regular or mosaic." << endl;
                                                    }
                                            } while (mosaicAnswer != "regular" && mosaicAnswer != "mosaic" && mosaicAnswer != "r" && mosaicAnswer != "m");
                                            if (mosaicAnswer == "mosaic" || mosaicAnswer == "m") {
                                                string lowerItem = itemName;
                                                transform(lowerItem.begin(), lowerItem.end(), lowerItem.begin(), ::tolower);
                                                if (lowerItem.find("slab") != string::npos) {
                                                    itemName = "Bamboo Mosaic Slab";
                                                } else {
                                                    itemName = "Bamboo Mosaic Stair";
                                                }
                                            }
                                        }
                                    }
                                    baseCheck = findBaseItem(itemName);
                                    recipeCheck = findRecipe(itemName);
                                }
                            }
                        } while (!validWood);
                    }
                }

                bool validInput = false;

                /* TODO: pluralization for quantity question
                Approach: hardcoded map of item name -> plural form
                e.g. {"stairs", "stairs"}, {"oak slab", "oak slabs"}, 
                {"bookshelf", "bookshelves"}, {"glass", "glass"}*/

                do{
                    cout << "\nHow many " << itemName << " are you crafting? ";
                    cin >> quantity;
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
                vector<string> resultNames;
                vector<unsigned int> resultQuantities;
                resolveRecipe(itemName, quantity, resultNames, resultQuantities);

                cout << "\nFor " << quantity << " " << itemName << ", you will need " << endl;
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
                for (int i = 0; i < resultNames.size(); ++i) {
                    int baseIndex = findBaseItem(resultNames[i]);
                    StackSize stackSize = baseItems[baseIndex].stackSize;
                    displayQuantityNoAnim(resultNames[i], resultQuantities[i], stackSize);
                }
                do {
                    cout << "\nWould you like to convert something else? (yes/no): ";
                    cin >> again;
                    cin.ignore(1000, '\n');
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