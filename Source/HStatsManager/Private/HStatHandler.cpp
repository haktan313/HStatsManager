


#include "HStatHandler.h"
#include "HEnumsStructure_StatManager.h"
#include "Components/ActorComponent.h"

// Sets default values for this component's properties
float UHStatHandler::TakeDamage(FS_DamageInfo aboutDamage)
{
	currentHealth -= aboutDamage.AmountOfDamage;
	if(currentHealth <= 0)//If the health is less than or equal to 0, then broadcast the death type.
	{
		currentHealth = 0;
		OnDeath.Broadcast(aboutDamage.DeathType);
	}
	else
	{
		OnDamageResponse.Broadcast(aboutDamage.DamageType);
	}
	return currentHealth;
}

//Heal the character
float UHStatHandler::Heal(float amount)
{
	currentHealth += amount;
	currentHealth = FMath::Clamp(currentHealth, 0.f, maxHealth);//Clamp the health between 0 and max health.
	if(currentHealth >= maxHealth)//If the health is greater than or equal to max health, then set the health to max health.
	{
		currentHealth = maxHealth;
	}
	return currentHealth;
}

//Decrease the stat value
float UHStatHandler::DecreaseStat(FString& statName, float amount)
{
	if(statNameCurrentValue.Contains(statName) && statNameMaxValue.Contains(statName))//If the stat name is present in the current value and max value maps, then decrease the stat value.
	{
		float& currentValue = statNameCurrentValue[statName];
		float& maxValue = statNameMaxValue[statName];
		currentValue -= amount;
		if(currentValue <= 0)
		{
			currentValue = 0;
		}
		return currentValue;
	}
	return 0;
}

//Check if the stat value can be decreased
bool UHStatHandler::CanDecreaseStat(FString& statName, float amount)
{
	if(statNameCurrentValue.Contains(statName) && statNameMaxValue.Contains(statName))//If the stat name is present in the current value and max value maps, then check if the stat value can be decreased.
	{
		float currentValue = statNameCurrentValue[statName];
		float maxValue = statNameMaxValue[statName];
		if(currentValue - amount >= 0)//If the stat value is greater than or equal to 0 after decreasing the stat value, then return true.
		{
			return true;
		}
	}
	return false;
}

//Increase the stat value
float UHStatHandler::IncreaseStat(FString& statName, float amount)
{
	if(statNameCurrentValue.Contains(statName) && statNameMaxValue.Contains(statName))//If the stat name is present in the current value and max value maps, then increase the stat value.
	{
		float& currentValue = statNameCurrentValue[statName];
		float& maxValue = statNameMaxValue[statName];
		currentValue += amount;
		currentValue = FMath::Clamp(currentValue, 0.f, maxValue);//Clamp the stat value between 0 and max value.
		if(currentValue >= maxValue)
		{
			currentValue = maxValue;
		}
		return currentValue;
	}
	return 0;
}

//------------------------------------------------------------------------

//Damage to the target
float UHStatHandler::DamageTo(FS_DamageInfo aboutDamage, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));//Get the StatHandler component of the target.
	if(statHandler)
	{
		return statHandler->TakeDamage(aboutDamage);//Take damage to the target.
	}
	return 0;
}

//Heal the target
float UHStatHandler::HealTo(float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));//Get the StatHandler component of the target.
	if(statHandler)
	{
		return statHandler->Heal(amount);//Heal the target.
	}
	return 0;
}

//Decrease the stat value of the target
float UHStatHandler::DecreaseStatValue(FString statName, float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));//Get the StatHandler component of the target.
	if(statHandler)
	{
		return statHandler->DecreaseStat(statName, amount);//Decrease the stat value of the target.
	}
	return 0;
}

//Check if the stat value can be decreased
bool UHStatHandler::CanDecreaseStatValue(FString statName, float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));//Get the StatHandler component of the target.
	if(statHandler)
	{
		bool a = statHandler->CanDecreaseStat(statName, amount);//Check if the stat value can be decreased of the target.
		return a;
	}
	return false;
}

//Increase the stat value of the target
float UHStatHandler::IncreaseStatValue(FString statName, float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));//Get the StatHandler component of the target.
	if(statHandler)
	{
		return statHandler->IncreaseStat(statName, amount);//Increase the stat value of the target.
	}
	return 0;
}
