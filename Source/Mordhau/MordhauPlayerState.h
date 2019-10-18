// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MordhauCharacter.h"
#include "MordhauPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauPlayerState : public APlayerState
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      MedianPings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      MedianPingsSorted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CurMedianPingIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PingMedian;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                LocalStableShortID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Kills;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Team;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Rank;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Badge;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Assists;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsPartyMember;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsAdmin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsMuted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsAlive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                            DeathsAndFlags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsFriend;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int KilledbyLocalPlayerCounter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int KilledLocalPlayerCounter;

	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void BanPlayer(int BanDuration, FString BanReason);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void SetPlayerName(const FString& S);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_Team();									
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_Kills();								
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_DeathsAndFlags();						
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_Assists();								
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddScore(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddKills(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddDeaths(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddAssists(int Amount);
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "PlayerStateFns")
		struct FSteamID GetSteamID();
 //STEAMIDFNHERE
};
