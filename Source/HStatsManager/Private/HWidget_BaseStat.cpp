


#include "HWidget_BaseStat.h"

//This function will return the percentage of the stat.
float UHWidget_BaseStat::GetPercentageOfStatFromStatHandlerObject(FString WhoseStatHandler,FString statName)
{
	UHStatHandler* statHandler = StatHandlerObjects.FindRef(WhoseStatHandler);//With this will get the stat handler object from the map.
	if (statHandler)
	{
		if(statHandler->statNameCurrentValue.Contains(statName) && statHandler->statNameMaxValue.Contains(statName))
		{
			float currentValue = statHandler->statNameCurrentValue[statName];
			float maxValue = statHandler->statNameMaxValue[statName];
			return currentValue / maxValue;
		}
	}
	return 0.f;
}

//This function will return the percentage of the health.
float UHWidget_BaseStat::GetHealthPercentageFromStatHandler(FString WhoseStatHandler)
{
	UHStatHandler* statHandler = StatHandlerObjects.FindRef(WhoseStatHandler);//With this will get the stat handler object from the map.
	if (statHandler)
	{
		if(statHandler)
		{
			float currentHealth = statHandler->currentHealth;
			float maxHealth = statHandler->maxHealth;
			return currentHealth / maxHealth;
		}
	}
	return 0.f;
}
