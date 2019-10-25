// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "CustomizationReplicationActor.generated.h"

UCLASS()
class MORDHAU_API ACustomizationReplicationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile                           LastAssignedProfile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AMordhauCharacter*>    RegisteredCharacters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasAnything;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bWasEverAssigned;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bWillDestroyOnUnregister;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
class USkeletalMesh*                               Cached1PMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
class USkeletalMesh*                               Cached1PDeadMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
class USkeletalMesh*                               CachedUnifiedMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)

		struct FRepArrayShortWithVersion                    ReplicatedFaceBonesTranslate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayShortWithVersion                    ReplicatedFaceBonesRotate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayShortWithVersion                    ReplicatedFaceBonesScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayAppearanceWithVersion               ReplicatedAppearanceCustomization;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArraySkillsWithVersion                   ReplicatedSkillsCustomization;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayByteWithVersion                     ReplicatedDefaultEquipmentId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
TArray<class UClass*>                              DefaultEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayByteWithVersion                     ReplicatedWearableId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayByteWithVersion                     ReplicatedWearableColor1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayByteWithVersion                     ReplicatedWearableColor2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FRepArrayByteWithVersion                     ReplicatedWearablePattern;

UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void UpdateCharacterProfile(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void UnregisterCharacter(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void TriggerUpdateIfUpToDate();
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void RegisterCharacter(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedWearablePattern();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedWearableId();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedWearableColor2();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedWearableColor1();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedSkillsCustomization();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedFaceBonesTranslate();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedFaceBonesScale();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedFaceBonesRotate();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedDefaultEquipmentId();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_ReplicatedAppearanceCustomization();
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
bool IsUpToDate();
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void AssignDataFromProfile(const struct FCharacterProfile& Profile);
};