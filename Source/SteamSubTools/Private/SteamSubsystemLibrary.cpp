
#include "SteamSubsystemLibrary.h"
#include "UnrealString.h"

void USteamSubsystemLibrary::GetSteamSessionTicket(FString&SteamSesstionTicket, bool&IsValid)
{
		IOnlineSubsystem* OnlineInterface;
		OnlineInterface = IOnlineSubsystem::Get();

		FString SessionTicket = OnlineInterface->GetIdentityInterface()->GetAuthToken(0);
		IsValid = (!SessionTicket.IsEmpty()) == (SessionTicket.Len() > 64);
		SteamSesstionTicket = SessionTicket;
}
