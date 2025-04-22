# HStatsManager
# HStatsManager Documentation
![plugin](https://github.com/user-attachments/assets/b778de77-cba1-4cc2-8a2d-e395306edc68)

**Unreal Engine 5.2: https://www.mediafire.com/file/604nd0qdcq3h6r8/HStatsManager_5.2.zip/file**

**Unreal Engine 5.4: https://www.mediafire.com/file/h9kzn984ye9obmj/HStatsManager_5.4.zip/file**

**Unreal Engine 5.5: https://www.mediafire.com/file/yk7xnvr32g6p6vt/HStatsManager_5.5.zip/file**

## Introduction 
The HStatsManager Plugin allows you to easily manage character stats in your game projects. This plugin supports basic game mechanics such as taking damage, healing, and increasing or decreasing stats. It also lets you create as many custom stats as you need and includes a BaseStat Widget for easily visualizing these stats, such as health percentag.

## Contents

- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Some Features](#some-features)
- [Architecture and Blueprint & C++ Examples](#architecture-and-blueprint--c-examples)
  - [HStatHandler](#hstathandler)
  - [Functions & Events](#functions--events)  
  - [HWidget_BaseStat](#hwidget_basestat)
- [Tutorial Video](#tutorial-video)

## Supported Versions
This plugin is compatible with Unreal Engine 5.2 and is designed to work in both Blueprint and C++ projects.


## Installation Instructions

1. **Extract the Plugin File**  
   Extract the downloaded `.zip` file to a folder.

2. **Move the Plugin Folder**  
   Move the extracted plugin folder to the `Engine/Plugins/Marketplace` directory of your Unreal Engine installation. The path is usually:  
   `C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\Marketplace`

3. **Activate the Plugin**  
   Open Unreal Engine, go to `Edit > Plugins`, and enable the plugin.


## Some Features

- **Predefined Health Stat**: The plugin includes a built-in health stat, ready to use out of the box. It simplifies implementing basic health mechanics in your game.

- **Event-Driven Responses**:
    The plugin includes built-in functions to react to key gameplay events:
        On Damage Taken: Trigger responses when the character takes damage.
        On Death: Automatically handle character death events with customizable functionality.

- **Custom Stat Creation**: Beyond the predefined health stat, you can create unlimited custom stats according to the needs of your game, such as stamina, mana, or other unique stats.

- **BaseStat Widget Integration**:

    You can use the GetHealthPercentageFromStatHandler function to show the health percentage in the user interface. Just type whose health percentage you want to show
    For custom statistics, the widget provides the flexible GetPercentageOfStatFromStatHandlerObject function. Just enter the name of the statistic and whose statistics you want to show, and it will return the percentage available for display.

  - To use the BaseStat Widget for stats:

    Create the Widget: Add the BaseStat Widget to your UI.
    Assign the StatHandler into the Stat Handler Objects map: Connect the HStatHandler component to the widget by typing the name of whose HStatHandler component it is.


## Architecture and Blueprint & C++ Examples

### HStatHandler
![hstatcomponent](https://github.com/user-attachments/assets/b11cf9b2-eaee-41c6-8da1-f4550ac8fe6c)

The HStatHandler Component is the core system for managing character stats in the HStatsManager Plugin. It provides an efficient and flexible way to handle predefined and custom stats, including health, stamina, or any stat you wish to create.

  - **Health Management**: Built-in support for managing health, including taking damage, healing, and broadcasting health-related events.

  - **Custom Stat Support**: Allows you to dynamically create and manage any number of custom stats with no additional setup required.

  - **Stat Operations**: Includes functions for increasing, decreasing, and clamping stat values within their defined ranges.
 
 - ### Functions & Events:
   ![Image](https://github.com/user-attachments/assets/41bf9c2b-de73-4c44-8154-7bde570c291f)    
  ![Image](https://github.com/user-attachments/assets/3e5d5fe2-d18b-4239-9233-540560db7fc1)
  ![Image](https://github.com/user-attachments/assets/968fcf12-286a-4803-801c-b8fc048471fa)
  ![Image](https://github.com/user-attachments/assets/71f9b03d-1e5f-48fa-999a-34bc0f6a5021)
  ![Image](https://github.com/user-attachments/assets/8de8a482-0df7-45d6-81a6-0fed3db79803)

   - **DamageTo**: Applies damage to a target actor based on a specified type and amount, triggering OnDamageResponse and, if health reaches zero, OnDeath.
   - **HealTo**: Heal a specified amount of health to a target actor, clamped by the maximum health value.
   - **OnDeath**: A dispatcher event that triggers when a character dies, providing the reaction animation from DamageTo function.
   - **OnDamageResponse**: A dispatcher event that triggers when the character takes damage, providing the reaction animation from DamageTo function.
   - **CanDecreaseStatValue**: Checks if a specified stat on a target actor, identified by the entered StatName, can be reduced by a given amount.
   - **DecreaseStatValue**: Reduces the value of the stat identified by the entered StatName on the target actor by the specified amount. Both Current and Max values for the stat must already be set in the target's HStatHandler.
   - **IncreaseStatValue**: Increases the value of the stat identified by the entered StatName on the target actor by the specified amount. Both Current and Max values for the stat must already be set in the target's HStatHandler.
   - **OnStatReachMaxValue**: A dispatcher event that is triggered when the chosen stat reaches its maximum value.
   - **OnStatReachMinValue**: A dispatcher event that is triggered when the chosen stat reaches its minimum value.
     
 - **Varaibles**:
   - **CurrentHealth**: The current health value of the actor, decreased by damage and increased by healing.
   - **MaxHealth**:  The maximum possible health value for the actor.
   - **CanTakeDamage**: If true, the character can take damage.
   - **CanHeal**: If true, the character can heal.
   - **StatNameCurrentValue**: A map storing the current values of custom stats identified by their names.
   - **StatNameMaxValue**: A map storing the maximum values of custom stats identified by their names.
   - **StatNameCanDecrease**: If true, the stat you write can decrease.
   - **StatNameCanIncrease**: If true, the stat you write can increase.
   
   ![Screenshot 2024-12-30 120013](https://github.com/user-attachments/assets/28e0a19b-4fc7-46ee-99c3-d5967f41077c)

### HWidget_BaseStat

- The BaseStat Widget in the HStatsManager Plugin is designed to seamlessly display stats like health or custom-defined stats in your game's UI. Here’s how it works based on the provided examples:

  - ### Creating the Widget:
    When creating a new widget, select the HWidget_BaseStat class as the parent. This ensures your widget has all the pre-built functionality for stat management and visualization.
![widgetcreate](https://github.com/user-attachments/assets/b2d95793-b51d-4126-8c08-b5471390076d)

  - ### Health Binding:
    The widget has 2 functions to use on ‘Create Binding’. GetHealthPercantegeFromStatHandler and GetPercentageOfStatFromStatHandlerObject. For health, just enter the name of the stathandler component you want.
    
    ![Image](https://github.com/user-attachments/assets/8f3af4aa-4f40-445e-ad43-2dc4d9e4797e)
    ![Image](https://github.com/user-attachments/assets/8ff383df-4342-42de-8691-41e50fce0cf7)
  ![Image](https://github.com/user-attachments/assets/bf79c121-12f3-44fd-b6b2-ec992c338893)

  - ### Custom Stat Binding:
    For custom stats, the widget provides the GetPercentageOfStat function. Simply input the stat's name into the function (e.g., "Stamina" or "Mana"), and it will return the stat's percentage value, which you can bind to UI elements like progress bars.
    ![Image](https://github.com/user-attachments/assets/b46ddf3a-3a5a-4f3d-8634-ddcdac770d5c)

  - ### Widget Integration:

    To use the widget in your game:
    
    - **Step 1**: Add the widget to your UI using CreateWidget.
    - **Step 2**: Connect the HStatHandler component to the widget by typing the name of whose HStatHandler component it is. This connection allows the widget to pull real-time data.
      
  ![Image](https://github.com/user-attachments/assets/b3082161-f24f-43ea-8080-71f80875f8a8)

## Tutorial Video
[HStatsManager Plugin Tutorial](https://youtu.be/IpXztwQfopE)


