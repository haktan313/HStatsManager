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
 
 - **Functions & Events**:
   ![functions](https://github.com/user-attachments/assets/3dafbe43-b463-4a6b-85e9-1b715d4163b3)
   ![ondeath and ondamage](https://github.com/user-attachments/assets/e2e0cbe1-b061-4335-9e1f-50ff15cf25b2)   ![constructure and functions c++](https://github.com/user-attachments/assets/c55445db-838a-4dea-a784-03d4a126e918)
   ![death and damage c++](https://github.com/user-attachments/assets/42811925-b7ec-4893-a6f5-c18aa022a5ab)

 - **Varaibles**:
   
   ![hstatvaraibles](https://github.com/user-attachments/assets/71474f37-d905-4aa8-bf99-7f0f12d9e219)

### HWidget_BaseStat
![widgetcreate](https://github.com/user-attachments/assets/b2d95793-b51d-4126-8c08-b5471390076d)



