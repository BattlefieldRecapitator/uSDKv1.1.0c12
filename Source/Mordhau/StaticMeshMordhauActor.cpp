// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshMordhauActor.h"



//AStaticMeshMordhauActor::AStaticMeshMordhauActor(const FObjectInitializer& ObjectInitializer)
//{
//	//RootComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
//	//SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
//	//SkeletalMeshComponent->AttachTo(RootComponent);
//	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
//		class UStaticMeshComponent* StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
//	StaticMeshComponent->bEditableWhenInherited = true;
//	StaticMeshComponent->AttachTo(RootComponent);
//}
AStaticMeshMordhauActor::AStaticMeshMordhauActor()
{
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMesh;
}