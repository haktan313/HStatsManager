


#include "HWidget_BaseStat.h"

//This function will return the percentage of the stat.
float UHWidget_BaseStat::GetPercentageOfStat(FString statName)
{
	if(StatHandlerObject->statNameCurrentValue.Contains(statName) && StatHandlerObject->statNameMaxValue.Contains(statName))
	{
		float currentValue = StatHandlerObject->statNameCurrentValue[statName];
		float maxValue = StatHandlerObject->statNameMaxValue[statName];
		return currentValue / maxValue;
	}
	return 0.f;
}

//This function will return the percentage of the health.
float UHWidget_BaseStat::GetHealthPercentage() const
{
	if(StatHandlerObject)
	{
		float currentHealth = StatHandlerObject->currentHealth;
		float maxHealth = StatHandlerObject->maxHealth;
		return currentHealth / maxHealth;
	}
	return 0.f;
}

