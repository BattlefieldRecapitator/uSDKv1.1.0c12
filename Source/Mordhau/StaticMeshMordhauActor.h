// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "StaticMeshMordhauActor.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AStaticMeshMordhauActor : public AMordhauActor
{
	GENERATED_BODY()
	
public:
	//AStaticMeshMordhauActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	class UStaticMeshComponent* StaticMeshComponent;
	//
	AStaticMeshMordhauActor();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* StaticMesh;
};
