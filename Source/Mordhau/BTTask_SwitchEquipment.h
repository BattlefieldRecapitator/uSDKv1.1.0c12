// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwitchEquipment.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UBTTask_SwitchEquipment : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bMelee;                                                   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*>                              AllowedSubclasses;                                        // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*>                              NotAllowedSubclasses;                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	
	
};
