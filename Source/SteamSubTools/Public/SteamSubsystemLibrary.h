#pragma once


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

// Add Include Section VVVVVV
#include "Online.h"
#include "OnlineSubsystem.h"
#include "Kismet/GameplayStatics.h"
// ^^^^^^^^^^^^^^^^^^^^^^^^

#include "SteamSubsystemLibrary.generated.h"

UCLASS()
class STEAMSUBTOOLS_API USteamSubsystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category= "Steam Subsystem Tools")
		static void GetSteamSessionTicket(FString&SteamSesstionTicket,bool&IsValid);

};
