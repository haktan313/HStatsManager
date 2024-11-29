# HStatsManager
# HStatsManager Documentation
![plugin](https://github.com/user-attachments/assets/b778de77-cba1-4cc2-8a2d-e395306edc68)

## Introduction 
The HStatsManager Plugin allows you to easily manage character stats in your game projects. This plugin supports basic game mechanics such as taking damage, healing, and increasing or decreasing stats. It also lets you create as many custom stats as you need and includes a BaseStat Widget for easily visualizing these stats, such as health percentag.

## Contents

- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Some Features](#some-features)

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
  -To use the BaseStat Widget for stats:

    Create the Widget: Add the BaseStat Widget to your UI.
    Assign the StatHandler: Link your character's HStatHandler component to the widget's StatHandlerObject reference.


## Architecture and Blueprint & C++ Examples
