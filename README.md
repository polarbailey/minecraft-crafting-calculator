# Minecraft-Crafting-Calculator
**Builders tool to help convert minecraft recipies into base components and convert large numbers into digestable minecraft numbers (shulkers, stacks, excess)**

## About
Welcome to my Minecraft Recipe Converter! This tool has 3 features: Stack Converter, Recipe Converter, and Directory. My goal with this tool is to allow both casual players and content creators alike to spend less time doing math while planning out their builds, and more time actually playing the game.  
This project is completely free and open source! I have plans to continue to update it for a bit including putting it into web assembly to make it a browser app rather than something you have to download.

The Stack converter is the building block of the program. It has you give an item name and a raw quantity that you need converted into what i call "Minecraft Numbers" e.g. if you need 22160 cobblestone, this will output that you need 12 shulkers, 22 stacks, and 16 cobblestone. It is linked into the recipe database that I built, so if the item name is found there, it will use its proper stack size. otherwise it defaults to 64.

The main feature is the Recipe converter and it took the longest to code and tweak. After answering qualifying questions you put in the name of an item you're trying to craft and the quantity you need. It will output the raw items needed to craft that much of that item. e.g. If you're needing to craft 100 Sticky Pistons, it will output that you need 1 Stack + 36 Slimeballs, 1 Stack + 36 Iron Ingots, 1 Stack + 36 Redstone Dust, 6 Stacks + 16 Cobblestone, and 1 Stack + 11 Logs. 

The last feature is the Directory. This was a late addition to the code; I added it so that anyone can know exactly which items are already in the recipe database. It's divided into different categories: Base Items (Items you can acquire without crafting anything*), Single-Crafts (Items that only have Base Items in their crafting recipe), Multi-Crafts (this is the bulk of items; it can have any kind of item in its crafting recipe), Smelts (some items in recipes can only be obtained by smelting them e.g. smooth stone/cracked stone bricks), Obtainables (these require other items to acquire but aren't crafted themselves e.g. honey bottles). 

*certain items are in different categories based on the qualifying questions you answer in the recipe converter. Those caveats are listed in their directory entry.

This was created for my C++ Class Final Project, and I had a lot of fun working on it. Check out the trailer of this tool in action here: [INSERT LINK AFTER YOU UPLOAD IT] 

Combining this with your items list from a Litematica build is one of the main ways I pictured someone using this. Litematica gives you how many of each item in your build, but keeps it at their crafted end items. Using this will let you know what you need to actually acquire to craft everything you need!

## Installation Instructions
### Prerequisites

You will need a C++ compiler installed before compiling.

### Windows
1. Download your choice of compiler. The one I used was from [here](https://winlibs.com/#download-release) (takes you to https://winlibs.com/#download-release).
2. Run the installer and follow the setup steps.
3. Add MinGW-w64 to your PATH:
   - Search "Environment Variables" in the Start Menu
   - Under "Advanced" in "System Properties" select "Environment Variables..."
   - Find and double click on "Path"
   - Click "New" and add the file path to your installed file e.g. C:\mingw64\bin
   - Click OK and restart your terminal.
4. Verify the installation was successful by typing: "g++ --version" in your terminal.

### Mac
I don't use Apple products, here is [two](https://www.youtube.com/watch?v=0z-fCNNqfEg) different [videos](https://www.youtube.com/watch?v=NYC6W-DsFcU) from *Programming with Dr. Hayes* on how to get the compiler on MacOS. Also a helpful [comment](https://www.reddit.com/r/cpp_questions/comments/160edzv/where_do_i_download_g_google_isnt_giving_me/jxmsri8/) from redditor u/pine_ary

### Linux
You can easily install it through your package manager. 

You can also just install it [here](https://code.visualstudio.com/Download) and instructions on the compiler can be found [here](https://code.visualstudio.com/docs/cpp/config-mingw)

### Installation

1. On the GitHub page, click the green "Code" button and select "Download Zip".
2. Extract the file to a folder of your choosing.
3. Open a terminal and navigate to the extracted folder:  
   "cd PATH\TO\YOUR\FOLDER\HERE"
4. Compile using g++  
   g++ main.cpp recipes.cpp directory.cpp -o PROGRAM NAME HERE*  
   *you can rename this to whatever you want it to be
5. Run the program:
   Windows:   PROGRAM_NAME.exe
   Mac/Linux: ./PROGRAM_NAME
   
## Road Map
Check out my future plans for the project here https://github.com/polarbailey/minecraft-crafting-calculator/blob/school/ROADMAP.md
