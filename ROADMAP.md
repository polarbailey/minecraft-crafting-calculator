**Current Roadmap**

***VERSION ITENERARY POST V1.0***
- [x] v1.0 Final School Submission *Released 5/10/26*
- [ ] v1.1 Add all wood variants (oak, birch, crimson, etc.)
- [ ] v1.2 Add Stone Variants (Blackstone and Deepslate)
- [ ] v1.3 Add Extra Stone (Granite, andesite, diorite, etc.)
- [ ] v1.4 Add "Decoration" Blocks (ones that don't necessarily serve a function, just for building)
- [ ] v1.5 Add Multi-Craft option (allow for multiple crafting recipes to be converted together instead of one at a time to get total ingredient list)
- [ ] v1.6-1.7 Unknown currently (buffer for final pre 2.0 testing)
- [ ] v1.8 Send to WebAssembly for testing Web-based UI
- [ ] v1.9 Final UI testing
- [ ] v2.0 Full Web Based application with GUI included

**3/9/26**
- [x] *added 3/9/26* Add an artificial delay for calculations (studies show it produces higher confidence in results)
- [x] *added 3/9/26* convert to 3 full branches: 1 for school, 1 for development after school is finished, and 1 official release
- [x] *added 3/14/26* Add a Directory so users can know what items are used in the program
- [ ] Update from just "wood, stone, cobble" to actual wood and stone types including granite, andesite, etc. *(Post School Feature)*

 **3/10/26**
 - [x] *added 3/12/26* Figure out all conditional settings to allow user to change (Already have stonecutter, silk touch, and badlands)

**3/12/26** 
- [x] *added 3/29/26* Update Stack Converter to differentiate between items that stack to 64, items that stack to 16, and items that are unstackable. ~~*(Post School Feature)*~~ (actually planning on adding this in for the school project.)
- ❌️ ~~create a search feature in the directory~~ (removed from roadmap as I don't yet know how/if i'd want to implement it in the base code, or in whatever GUI I add later.
- [ ] Create a GUI so that the program isn't just used in the terminal *(Post School Feature)* this will be v2.0 and it will be in Web Assembly

**3/14/26**
- [ ] Add Disparity for Java vs. Bedrock (Certain recipes are slightly different between versions. e.g. stonecutter can use any stone type in Bedrock, not just "Stone")
- [x] *added 3/14/26* Start Roadmap document
- [x] *added 3/9/36* refine Stack converter to Double Chests of Shulkers, Chests of Shulkers, Shulkers, Stacks, and Excess ~~*(Post School Feature)*~~ adding this now in v0.60 to make the recipe converter more accurate.
- [ ] Add Multi-Craft Sum conversions (The ability to get a combination of all Raw materials for multiple different recipes in one usage of the program. e.g. getting 1 combined result for making say 100 pistons, 45 Redstone Comparators, 95 hoppers, 42 chests, and 30 copper bars *(Post School Feature)*
- [x] *added 3/28/26* finish setting up recipe converter logic for crafts
- [x] *added 3/30/26* Connect recipe converter to stack converter
- [x] *added 3/20/26* Set up database for what items stack in what quantities (64, 16, 1)
- [ ] Figure out the scope of the additions for full release (will i go past 26.0? So far the definite answer for newest item to be added later is ~~Golden Dandelion~~ Sulfur and Cinnabar blocks)

**3/15/26**
- [x] *added 3/16/26* enum StackSize { SINGLE = 1, SIXTEEN = 16, SIXTY_FOUR = 64 } *(Post School Feature)*
- [x] *added 3/16/26* Add stackSize field to Recipe struct
- [x] *added 3/30/26* Update stack converter math to use stackSize instead of hardcoded 64 ~~*(Post School Feature)*~~ added it for school project
- [x] *added 3/30/26* Update displayQuantity() to reflect correct stack sizes per item ~~*(Post School Feature)*~~ added it to the school project

**3/16/26**
- [ ] Enchanting guide for least expensive (huge maybe, wouldn't be until at least 3.0 at minimum)

**3/28/26**
- [x] *added 3/28/26* separate the directory and recipes into their own pages ~~(Post School Feature)~~

**3/29/26**
- [ ] v1.x - Basic terminal search (returns category and page number) *(Post School Feature)*
- [ ] v2.x - Real time search with highlighting in web UI *(Post School Feature)*



I wanted to make this Roadmap as I started figuring out what features I wanted to give this program, both for my school submission and also for the features I plan on adding after I submit my assignment, because I'll have more time for focusing on the project and not be constrained by my 8 week(ish) timeline.
It is 3/14/26 and I will be using my commits to try to build the timeline from before I made this ROADMAP as well as keeping it up to date as much as I can. 
*(Post School Feature)* are things that will not appear in my school submission but will be worked on after the fact.

Pre-Roadmap:
**2/28/26**: Assigned Project for C++ Class.

**3/4/26**: Found announcement for project. After looking through the scope, Decided on making a Minecraft Converter Calculator WITH Recipe conversion as well.
Started Project Proposal required for class assignment 1 for the project. It was due by 3/15/26
Turned in Project Proposal and got started on making a github account to store the project.

**3/5/26**: Created GitHub Repo and started work on getting used to C++ Coding in a Codespace.
Finalized full scope of project at this time: 
Stack Converter: turns raw numbers into digestable minecraft ones
Recipe Converter: turns recipes into raw materials then runs them through the stack converter.

**3/9/26** Got groundwork set up for menuing through the program. 
Decided to get a list of base items, single crafts, and multi-crafts in a google sheets for better organization for the recipes.
Started actually getting ideas for features. The following is things i wanted to add to the program at this point (whether now or in the future)
