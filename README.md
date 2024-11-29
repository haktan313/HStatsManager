# HStatsManager
# HStatsManager Documentation
![plugin](https://github.com/user-attachments/assets/b778de77-cba1-4cc2-8a2d-e395306edc68)

## Introduction 
The HStatsManager Plugin allows you to easily manage character stats in your game projects. This plugin supports basic game mechanics such as taking damage, healing, and increasing or decreasing stats. It also lets you create as many custom stats as you need and includes a BaseStat Widget for easily visualizing these stats, such as health percentag.

## Contents

- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Some Features](#some-features)
- [Architecture and Blueprint & C++ Examples](#architecture-and-blueprint--c-examples)
  - [HStatHandler](#hstathandler)
  - [HWidget_BaseStat](#hwidget--basestat)

## Supported Versions
This plugin is compatible with Unreal Engine 5.2 and is designed to work in both Blueprint and C++ projects.


## Installation Instructions

1. **Extract the Plugin File**  
   Extract the downloaded `.zip` file to a folder.

2. **Move the Plugin Folder**  
   Move the extracted plugin folder to the `Engine/Plugins/Marketplace` directory of your Unreal Engine installation. The path is usually:  
   `C:\Program Files\Epic Games\UE_5.2\Engine\Plugins\Marketplace`

3. **Activate the Plugin**  
   Open Unreal Engine, go to `Edit > Plugins`, and enable the plugin.


## Some Features

- **Predefined Health Stat**: The plugin includes a built-in health stat, ready to use out of the box. It simplifies implementing basic health mechanics in your game.

- **Event-Driven Responses**:
    The plugin includes built-in functions to react to key gameplay events:
        On Damage Taken: Trigger responses when the character takes damage.
        On Death: Automatically handle character death events with customizable functionality.

- **Custom Stat Creation**: Beyond the predefined health stat, you can create unlimited custom stats tailored to your game's needs, such as stamina, mana, or other unique stats.

- **BaseStat Widget Integration**:

    Includes a pre-made health binding to seamlessly connect health values to a progress bar in your game's UI.
    For custom stats, the widget provides the versatile GetPercentageOfStat function. Just input the stat's name, and it returns the current percentage, ready for display.

  - To use the BaseStat Widget for stats:

    Create the Widget: Add the BaseStat Widget to your UI.
    Assign the StatHandler: Link your character's HStatHandler component to the widget's StatHandlerObject reference.


## Architecture and Blueprint & C++ Examples

### HStatHandler
![hstatcomponent](https://github.com/user-attachments/assets/b11cf9b2-eaee-41c6-8da1-f4550ac8fe6c)

The HStatHandler Component is the core system for managing character stats in the HStatsManager Plugin. It provides an efficient and flexible way to handle predefined and custom stats, including health, stamina, or any stat you wish to create.

  - **Health Management**: Built-in support for managing health, including taking damage, healing, and broadcasting health-related events.

  - **Custom Stat Support**: Allows you to dynamically create and manage any number of custom stats with no additional setup required.

  - **Stat Operations**: Includes functions for increasing, decreasing, and clamping stat values within their defined ranges.
 
 - ### Functions & Events:
   ![functions](https://github.com/user-attachments/assets/3dafbe43-b463-4a6b-85e9-1b715d4163b3)
   ![ondeath and ondamage](https://github.com/user-attachments/assets/e2e0cbe1-b061-4335-9e1f-50ff15cf25b2)   ![constructure and functions c++](https://github.com/user-attachments/assets/c55445db-838a-4dea-a784-03d4a126e918)
   ![death and damage c++](https://github.com/user-attachments/assets/42811925-b7ec-4893-a6f5-c18aa022a5ab)

   - **DamageTo**: Applies damage to a target actor based on a specified type and amount, triggering OnDamageResponse and, if health reaches zero, OnDeath.
   - **HealTo**: Heal a specified amount of health to a target actor, clamped by the maximum health value.
   - **OnDeath**: A dispatcher event that triggers when a character dies, providing the death type for custom reactions.
   - **OnDamageResponse**: A dispatcher event that triggers when the character takes damage, providing the damage type for real-time effects.
   - **CanDecreaseStatValue**: Checks if a specified stat on a target actor, identified by the entered StatName, can be reduced by a given amount.
   - **DecreaseStatValue**: Reduces the value of the stat identified by the entered StatName on the target actor by the specified amount. Both Current and Max values for the stat must already be set in the target's HStatHandler.
   - **IncreaseStatValue**: Increases the value of the stat identified by the entered StatName on the target actor by the specified amount. Both Current and Max values for the stat must already be set in the target's HStatHandler.
     
 - **Varaibles**:
   - **CurrentHealth**: The current health value of the actor, decreased by damage and increased by healing.
   - **MaxHealth**:  The maximum possible health value for the actor.
   - **StatNameCurrentValue**: A map storing the current values of custom stats identified by their names.
   - **StatNameMaxValue**: A map storing the maximum values of custom stats identified by their names. 
   
   ![hstatvaraibles](https://github.com/user-attachments/assets/71474f37-d905-4aa8-bf99-7f0f12d9e219)

### HWidget_BaseStat

- The BaseStat Widget in the HStatsManager Plugin is designed to seamlessly display stats like health or custom-defined stats in your game's UI. Here’s how it works based on the provided examples:

  - ### Creating the Widget:
    When creating a new widget, select the HWidget_BaseStat class as the parent. This ensures your widget has all the pre-built functionality for stat management and visualization.
![widgetcreate](https://github.com/user-attachments/assets/b2d95793-b51d-4126-8c08-b5471390076d)

  - ### Health Binding:
    The widget comes with a predefined binding, GetHealthPercentage, which calculates the percentage of health directly from the StatHandlerObject and applies it to a progress bar in the UI.
    ![bind](https://github.com/user-attachments/assets/ec3a6d56-1bcf-418f-b998-3c80e9c154d9)

  - ### Custom Stat Binding:
    For custom stats, the widget provides the GetPercentageOfStat function. Simply input the stat's name into the function (e.g., "Stamina" or "Mana"), and it will return the stat's percentage value, which you can bind to UI elements like progress bars.
    ![bindExample](https://github.com/user-attachments/assets/cd1a49bc-4e14-4a0e-8e3c-ff17039b68be)

  - ### Widget Integration:

    To use the widget in your game:
    
    - **Step 1**: Add the widget to your UI using CreateWidget.
    - **Step 2**: Assign the StatHandlerObject property of the widget to reference the HStatHandler component on your character. This connection allows the widget to pull real-time data from the character's stats.
      
    ![functions - copia](https://github.com/user-attachments/assets/0c1d237b-2a6b-42da-880a-0e9e508ee929)




