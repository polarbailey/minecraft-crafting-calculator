#include <iostream>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace std;

bool hasBamboo = false;
bool hasSilkTouch = false;
bool hasStonecutter = false;
bool hasBadlands = false;
bool hasNether = false;

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
    cout << itemName << "." << endl;
}

void displayDirectory(string items[], int itemCount, string categoryName){
    int totalPages = (itemCount + 4) / 5;
    int currentPage = 1;
    if(totalPages == 1){
        // A single page, so no need for a Next or Prev Page option
    }
    else if(currentPage == 1){
        cout << "N. Next Page" << endl;
    }
    else if(currentPage == totalPages){
        cout << "P. Prev Page" << endl;
    }
    else{
        cout << "P. Prev Page" << endl << "N. Next Page" << endl;
    }
}
void directoryBaseItems(){

}
void directorySingleCrafts(){

}
void directoryMultiCrafts(){

}
void directorySmelts(){

}
void directoryObtainables(){

}

int main() {
    string choice;
    bool running = true;

    while (running) {
    do {
        cout << "\nWelcome to my Minecraft Converter. Please select an option: " << endl;
        cout << "1. Stack Converter" << endl;
        cout << "2. Recipe Converter" << endl;
        cout << "0. Quit" << endl;
        cin >> choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

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
        else if (choice == "0" || choice == "quit" || choice == "stop") {
            cout << "Goodbye!" << endl << endl;
            running = false;
        }
        else {
            cout << "I'm sorry, my database is limited. You must enter the right selection." << endl << endl; // Cheeky I, Robot reference there. Shoutouts if you got it without this comment.
        } 
    } while (choice != "1" && choice != "stack" && choice != "2" && choice != "recipe" && choice != "0" && choice != "quit" && choice != "stop");
    }
    return 0;
}