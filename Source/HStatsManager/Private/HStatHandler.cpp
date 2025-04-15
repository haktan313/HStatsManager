


#include "HStatHandler.h"
#include "HEnumsStructure_StatManager.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"


float UHStatHandler::TakeDamage(FS_DamageInfo aboutDamage)
{
	currentHealth -= aboutDamage.AmountOfDamage;
	if(currentHealth <= 0)
	{
		currentHealth = 0;
		OnDeath.Broadcast(aboutDamage.DeathReactionAnimation);
	}
	else
	{
		OnDamageResponse.Broadcast(aboutDamage.DamageReactionAnimation);
	}
	return currentHealth;
}

float UHStatHandler::Heal(float amount)
{
	currentHealth += amount;
	currentHealth = FMath::Clamp(currentHealth, 0.f, maxHealth);
	if(currentHealth >= maxHealth)
	{
		currentHealth = maxHealth;
	}
	return currentHealth;
}

float UHStatHandler::DecreaseStat(FString& statName, float amount)
{
	if(statNameCurrentValue.Contains(statName) && statNameMaxValue.Contains(statName))
	{
		float& currentValue = statNameCurrentValue[statName];
		float& maxValue = statNameMaxValue[statName];
		currentValue -= amount;
		if(currentValue <= 0)
		{
			OnStatReachMinValue.Broadcast(statName);
			currentValue = 0;
		}
		return currentValue;
	}
	return 0;
}

bool UHStatHandler::CanDecreaseStat(FString& statName, float amount)
{
	if(statNameCurrentValue.Contains(statName) && statNameMaxValue.Contains(statName))
	{
		float currentValue = statNameCurrentValue[statName];
		float maxValue = statNameMaxValue[statName];
		if(currentValue - amount >= 0)
		{
			return true;
		}
	}
	return false;
}

float UHStatHandler::IncreaseStat(FString& statName, float amount)
{
	if(statNameCurrentValue.Contains(statName) && statNameMaxValue.Contains(statName))
	{
		float& currentValue = statNameCurrentValue[statName];
		float& maxValue = statNameMaxValue[statName];
		currentValue += amount;
		currentValue = FMath::Clamp(currentValue, 0.f, maxValue);
		if(currentValue >= maxValue)
		{
			OnStatReachMaxValue.Broadcast(statName);
			currentValue = maxValue;
		}
		return currentValue;
	}
	return 0;
}

//------------------------------------------------------------------------

float UHStatHandler::DamageTo(FS_DamageInfo aboutDamage, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));
	if(statHandler)
	{
		if (statHandler->CanTakeDamage)
		{
			return statHandler->TakeDamage(aboutDamage);
		}
		return 0;
	}
	return 0;
}


float UHStatHandler::HealTo(float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));
	if(statHandler)
	{
		if (statHandler->CanHeal)
		{
			return statHandler->Heal(amount);
		}
		return 0;
	}
	return 0;
}

float UHStatHandler::DecreaseStatValue(FString statName, float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));
	if(statHandler)
	{
		if (statHandler->statNameCanDecrease.Contains(statName))
		{
			if (statHandler->statNameCanDecrease[statName])
			{
				return statHandler->DecreaseStat(statName, amount);
			}
			return 0;
		}
		return statHandler->DecreaseStat(statName, amount);
	}
	return 0;
}

bool UHStatHandler::CanDecreaseStatValue(FString statName, float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));
	if(statHandler)
	{
		bool a = statHandler->CanDecreaseStat(statName, amount);
		return a;
	}
	return false;
}

float UHStatHandler::IncreaseStatValue(FString statName, float amount, AActor* target)
{
	UHStatHandler* statHandler = Cast<UHStatHandler>(target->GetComponentByClass(UHStatHandler::StaticClass()));
	if(statHandler)
	{
		if (statHandler->statNameCanIncrease.Contains(statName))
		{
			if (statHandler->statNameCanIncrease[statName])
			{
				return statHandler->IncreaseStat(statName, amount);
			}
			return 0;
		}
		return statHandler->IncreaseStat(statName, amount);
	}
	return 0;
}
