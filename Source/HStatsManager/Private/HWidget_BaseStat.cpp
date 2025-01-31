


#include "HWidget_BaseStat.h"

float UHWidget_BaseStat::GetPercentageOfStatFromStatHandlerObject(FString WhoseStatHandler,FString statName)
{
	UHStatHandler* statHandler = StatHandlerObjects.FindRef(WhoseStatHandler);
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

float UHWidget_BaseStat::GetHealthPercentageFromStatHandler(FString WhoseStatHandler)
{
	UHStatHandler* statHandler = StatHandlerObjects.FindRef(WhoseStatHandler);
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
