# minecraft-crafting-calculator
Builders tool to help convert minecraft recipies into base components and convert large numbers into digestable minecraft numbers (shulkers, stacks, excess)

This will have 3 features through 2 different user decision trees. The first one is what I am calling the Stack Converter. It will have you input the quantity of a block you need and it will convert that into easier to understand Minecraft terms. e.g. if you need 22160 cobblestone, this will output that you need 12 shulkers, 22 stacks, and 16 cobblestone.

The second and third are inherently connected in the second decision tree I'm calling the Recipe converter. This won't have every single minecraft craftable recipe as I'm just doing this for a school project to start. But I'll be including the recipes I most commonly use in my own Minecraft builds such as pistons, most redstone objects like repeaters, observers etc., chests, hoppers, doors, slabs, stairs, and more. The 2 features within this are a recipe calculation which will calculate total items needed for a quantity of a craftable item, as well as it breaks those materials down into their raw forms. i.e. any quantity of planks, wood slabs, etc. get converted to logs, things like a dispenser get broken down to logs for the bows, string for the bows, cobble for the dispenser, and redstone dust. This will then in one fell swoop get fed into the Stack converter so you know exactly what you need. 

You can combine this with things like litematica or similar mods to get your raw materials list. 

It will start by asking you whether you need to use just the Stack Converter or the Recipe converter too. 

For the Stack Converter it will just ask you for the quantity of the material you're using (the actual material doesn't matter) and it converts it to (Shulkers, Stacks, and Excess). It's really WYSIWYG.

For the recipe converter, it will ask you what you are trying to craft, if your input matches something in its database, it will ask you the quantity of the item. It will then ask you a series of things to determine the raw materials it will display. 
e.g. if its something that requires stone and can't use cobblestone, it will ask you if you have access to silk touch. Or if you're doing something with slabs, stairs, etc. it will clarify whether its wooden based or stone based (stone is all encompassing of stone, cobble, deepslate, blackstone, granite, andesite, diorite, etc.) if it's stone based, it will ask if you have access to a stonecutter. These will determine the raw material quantities it will put out. (an example is if you need 38 stone slabs, the calculation would be 21 stone required if you don't have a stonecutter or 19 stone required if you do, due to the crafting limitations.

This is currently a work in progress. If you somehow have access to this right now, I'm either having you debug test it for me, or someone i asked to debug it sent it to you. regardless, if you see this part of the README, dm me on blusky the phrase "titty sprinkles" and i'll include you in my playtester credits.
