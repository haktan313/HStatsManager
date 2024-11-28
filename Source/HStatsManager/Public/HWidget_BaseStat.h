//HWidget_BaseStat.h
//This is the header file for the BaseStat widget.This has the connection to the StatHandler class.
//This will be used to display the stats of the character in the game.

#pragma once

#include "CoreMinimal.h"
#include "HStatHandler.h"
#include "Blueprint/UserWidget.h"
#include "HWidget_BaseStat.generated.h"


UCLASS()
class HSTATSMANAGER_API UHWidget_BaseStat : public UUserWidget
{
	GENERATED_BODY()

public:

	//This is the StatHandler object that will be used to get the stats of the character.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats", meta = (ExposeOnSpawn = true))
	UHStatHandler* StatHandlerObject;

	//This function will return the percentage of the stat.
	UFUNCTION(BlueprintCallable, Category = "Stats")
	float GetPercentageOfStat(FString statName);

	//This function will return the percentage of the health.
	UFUNCTION(BlueprintCallable, Category = "Stats")
	float GetHealthPercentage() const;
};