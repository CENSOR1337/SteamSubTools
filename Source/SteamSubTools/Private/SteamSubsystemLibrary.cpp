// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamSubsystemLibrary.h"

void USteamSubsystemLibrary::GetSteamSessionTicket(FString&SteamSesstionTicket, bool&IsValid)
{
		IOnlineSubsystem* OnlineInterface;
		OnlineInterface = IOnlineSubsystem::Get();
		FString SessionTicket = OnlineInterface->GetIdentityInterface()->GetAuthToken(0);
		IsValid = (SessionTicket != "");
		SteamSesstionTicket = SessionTicket;
}
