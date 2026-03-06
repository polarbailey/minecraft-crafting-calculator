#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool hasBamboo = false;
bool hasSilkTouch = false;
bool hasStonecutter = false;
bool hasBadlands = false;

void displayQuantity(string itemName, unsigned int itemAmount) {
    unsigned int doubleChests = itemAmount / 93312; // 99312 = 54 shulkers full of stacks of items.
    unsigned int shulkers = (itemAmount % 93312) / 1728; // Amount of full shulkers that don't completely fill a double chest
    unsigned int remainder = itemAmount % 1728; // total items not filling a full shulker
    unsigned int stacks = remainder / 64; // amount of full stacks that don't fill a full shulker
    unsigned int excess = remainder % 64; // amount of loose items

    cout << "For " << itemAmount << " " << itemName << ", you will need " << endl;
    if (shulkers > 0) {
        cout << shulkers;
        if (shulkers == 1) cout << " Shulker";
        else cout << " Shulkers";
        if (stacks > 0 || excess > 0) cout << " + "; // this way there aren't erroneous "+" or other stuff if the math was clean whole numbers
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
    cout << itemName << "." << endl;
}

int main() {
    string choice;
    do {
        cout << "Welcome to my Minecraft Converter. Please select an option: " << endl;
        cout << "1. Stack Converter" << endl;
        cout << "2. Recipe Converter" << endl;
        cout << "0. Quit" << endl;
        cin >> choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

        if (choice == "1" || choice == "stack") {
            string itemName;
            unsigned int itemAmount;

            cout << "What item are you converting? ";
            cin.ignore();
            getline(cin, itemName);

            cout << "How much " << itemName << " are you converting? ";
            cin >> itemAmount;

            displayQuantity(itemName, itemAmount);
            cout << "\nNote: This tool is currently only accurate for items that stack into stacks of 64." << endl;
        }
        else if (choice == "2" || choice == "recipe") {
            cout << "This feature is currently under construction. Please check back later." << endl;
        }
        else if (choice == "0" || choice == "quit" || choice == "stop") {
            cout << "Goodbye!" << endl << endl;
        }
        else {
            cout << "I'm sorry, my database is limited. You must enter the right selection." << endl << endl; // Cheeky I, Robot reference there. Shoutouts if you got it without this comment.
        } 
    } while (choice != "1" && choice != "stack" && choice != "2" && choice != "recipe" && choice != "0" && choice != "quit" && choice != "stop");
    
    return 0;
}