// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamSubsystemLibrary.generated.h"

/**
 * 
 */
UCLASS()
class STEAMSUBTOOLS_API USteamSubsystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category= "Steam Subsystem Tools")
		static void GetSteamSessionTicket(FString&SteamSesstionTicket,bool&IsValid);

};
