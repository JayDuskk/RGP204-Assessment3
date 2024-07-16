// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DNDForge_BlueprintFunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class DNDFORGE_API UDNDForge_BlueprintFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = Game)
	static TArray<FString> GetAllSaveSlotNames();
	
};
