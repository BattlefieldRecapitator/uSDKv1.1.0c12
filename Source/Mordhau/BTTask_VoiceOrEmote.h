// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTaskOwnerInterface.h"
#include "BTTask_VoiceOrEmote.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UBTTask_VoiceOrEmote : public UBTTaskNode
{

	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8>                              VoiceCommandsList;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8>                              EmotesList;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceEmote;                               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              GlobalCooldown;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Chance;
	
	//virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
