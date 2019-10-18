// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeletalMeshMordhauActor.h"




//ASkeletalMeshMordhauActor::ASkeletalMeshMordhauActor(const FObjectInitializer& ObjectInitializer)
//{
//	//RootComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
//	//SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
//	//SkeletalMeshComponent->AttachTo(RootComponent);
//	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
//	class USkeletalMeshComponent* SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
//	SkeletalMesh->bEditableWhenInherited = true;
//}


ASkeletalMeshMordhauActor::ASkeletalMeshMordhauActor()
{
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	RootComponent = SkeletalMesh;
}


