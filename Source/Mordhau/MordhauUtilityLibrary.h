// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Mordhau.h"
#include "Engine/EngineTypes.h"
#include "MordhauUtilityLibrary.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:


UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static TArray<class AMordhauPlayerState*> SortPlayers(TArray<class AMordhauPlayerState*> Array);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void VSmoothDamp(const struct FVector& Target, float SmoothTime, float DeltaTime, float MaxSpeed, struct FVector Current, struct FVector CurrentVelocity);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool ValidateCharacterProfile(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void UnpossessCharacterAndHandleSpectating(class AController* Controller);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool TryExecuteHeavydutyOperation(class UWorld* WorldObject);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const FName& BoneName);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor, struct FCharacterProfile& strippedPrf);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString SteamIDToString(const struct FSteamID& SteamID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UDecalComponent* SpawnBloodDecalAtLocation(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float Snap180AngleToSteps(float Angle180, float Step);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool SLessThan(const FString& StringA, const FString& StringB);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool SGreaterThan(const FString& StringA, const FString& StringB);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetPawnFromRep(class AController* Contr, class APawn* NewPawn);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, const struct FVector2D& Value);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, const struct FVector& Value);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, const struct FRotator& Value);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int Value);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, const struct FLinearColor& Value);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void SendClientAdjustment(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void ResetServerPredictionData(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void ResetClientPredictionData(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int RandomRangeExclude(int Min, int Max, int Exclude);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void OpenURL(const FString& URL);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool NotEqual_SteamID(const struct FSteamID& A, const struct FSteamID& B);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void MarkRenderStateDirty(class UMeshComponent* MeshComp);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice, struct FCharacterProfile& emptyPrf);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsValid_SteamID(const struct FSteamID& SteamID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsTestingBranch();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsSteamFriend(class AMordhauPlayerState* Player);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsStandalone();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsServer();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsReleaseBranch();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsPlayInEditor();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsPartyMember(class AMordhauPlayerState* Player);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsOfficialServer();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsListenServer();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsEditor();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsDLCInstalled(int appid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsDevelopmentBuild();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsDevelopmentBranch();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsDemoPlayback(class UWorld* World);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsDedicatedServer();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool IsClient();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool HasActorBegunPlay(class AActor* Actor);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetXPFromRank(int Rank);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UWorld* GetWorldOf(class UObject* Object);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot, TArray<FText>& namePlacehldr);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot, TArray<class UClass*>& classHolder);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UClass* GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AMordhauCharacter* GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetVersionString();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetVersionName();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetTotalDemoTime(class UWorld* World);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const FName& SyncGroup);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool GetSupportedScreenResolutions(TArray<FString> Resolutions);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetSteamName(const struct FSteamID& SteamID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetSteamIDFromPlayer(class APlayerController* Player, struct FSteamID& ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FSteamID GetSteamID();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UTexture2D* GetSteamAvatar(const struct FSteamID& SteamID, EAvatarSize Size);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void GetSoundMixInfo(const FString& Name, struct FSoundMixInfo SoundMixInfo);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetServerSteamID(struct FSteamID& ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FName GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetRankFromXP(int XP);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AMordhauEquipment* GetRandomWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void GetRandomSkin(class AMordhauEquipment* Equipment, EItemRarity MaxRarity, int& ID, struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector GetRandomFaceCustomizationVector(float RandomExponent);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AMordhauEquipment* GetRandomEquipment(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetPing(class UObject* WorldContextObject, bool bUseMedian);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const FName& BoneName, struct FTransform& transformPlacehldr);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetPerksCost(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetPerks(TArray<class UPerk*>& Perks, const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetPerforceRevision();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetPacketsLost(class UObject* WorldContextObject);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetNormalizedTime(float Start, float End, float Current);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector2D GetMousePosition(class APlayerController* Controller);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UMordhauStats* GetMordhauStats();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AMordhauHUD* GetMordhauHUD();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UMordhauGameUserSettings* GetMordhauGameUserSettings();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetMaxIndexWithDraw(TArray<int> inArray, bool& bFoundDraw);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetMapName(class UObject* WorldContextObject);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetLastReceiveTime(class UObject* WorldContextObject);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool GetIsPeasant(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetFaceIndex(const struct FHitResult& Hit);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static FText getErrorText(const FString& ErrorString);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetEnumValue(const FString& EnumName, const FString& EnumKey);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetEnumKey(const FString& EnumName, int EnumValue);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UMordhauWearable* GetDefaultWearable(class UClass* FromClass);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class UObject* GetDefaultObject(class UClass* FromClass);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AActor* GetDefaultActor(class UClass* FromClass);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector2D GetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector GetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FRotator GetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, bool IsValid, struct FLinearColor& colorReturn);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool GetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool IsValid);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetCurrentFrameBP(class UObject* WorldContextObject);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetCurrentFrame(class UWorld* World);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetCurrentDemoTime(class UWorld* World);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString GetConsoleVariableString(const FString& VariableName);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetConsoleVariableInt(const FString& VariableName);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float GetConsoleVariableFloat(const FString& VariableName);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector GetComponentsBoundingBoxInActorSpace(class AActor* Actor);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector GetCentroid(TArray<struct FVector> Points);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int GetBuildVersion();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector GetBoxCenter(const struct FBox& Box);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<FName> Bones, float WeightThreshold, struct FBox& boxRef);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AActor* GetAttachParentActor(class AActor* Actor);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static void GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot, TArray<class UClass*>& classPlaceholder);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float Current, float CurrentVelocity);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static FText FormatText(const FText& Text);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile ForceValidatedProfile);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void ForceReplicationUpdate(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void FlushPlayerControllerPressedKeys(class APlayerController* Controller);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void FlashWindow();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector OutLocation);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void FindSteamID(const FString& PlayerNameOrSteamID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static class AMordhauPlayerState* FindPlayerState(const FString& PlayerNameOrSteamID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D& PointA, struct FVector2D& PointB);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FRotator FindBetween(const struct FVector& A, const struct FVector& B);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool Equal_SteamID(const struct FSteamID& A, const struct FSteamID& B);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
	static void DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int ComputePointsLeft(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static struct FVector ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static FString Capitalize(const FString& String);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static int CalculateGCD(int ValueA, int ValueB);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static float CalculateAngle2D(const struct FVector& Direction, float Yaw);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	static bool AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
static void AwardDuelMMR(struct FSteamID Winner, struct FSteamID Loser, int& NewWinnerMMR, int& NewLoserMMR);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static EServerRegion GetRegion(const FString& RegionName);
	//struct FBox GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const FName& BoneName);
//UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
	//struct FMapInfo GetMapInfo(class UObject* WorldContextObject, const FString& MapPath);
//struct FBoxSphereBounds GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);	
	//TArray<class AMordhauPlayerState*> SortPlayers(TArray<class AMordhauPlayerState*> Array);
	//TArray<struct FServerSearchResult> SortForServerBrowser(TArray<struct FServerSearchResult> Array);
	//TArray<struct FServerSearchResult> SortForMatchmaking(TArray<struct FServerSearchResult> Array);
	//static void SetSoundMixVolume(ESoundMix SoundMix, float Volume);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
static bool PlaneTrace(const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, bool bIgnoreSelf, struct FHitResult& LeftHit, struct FHitResult& RightHit, struct FHitResult& ForwardHit, struct FHitResult& BackHit, struct FVector& OutRight, struct FVector& OutForward);//class UObject* WorldContextObject,
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static bool MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly);
//bool LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
//UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
//struct FPOV LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static struct FBox GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector);
	//TEnumAsByte<ENetRole> GetRole(class AActor* Actor);
	//FString GetRegionName(EServerRegion Region);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UUpperChestWearable* GetRandomUpperChestWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauWearable* GetRandomShouldersWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class AMordhauEquipment* GetRandomRangedWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class AMordhauEquipment* GetRandomMeleeWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauWearable* GetRandomLowerChestWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class ULegsWearable* GetRandomLegsWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UHeadWearable* GetRandomHeadWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauWearable* GetRandomHandsWearable(class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauWearable* GetRandomFeetWearable(class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauWearable* GetRandomCoifWearable(class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UArmsWearable* GetRandomArmsWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauWebAPI* GetMordhauWebAPI();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauSingleton* GetMordhauSingleton();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauInventory* GetMordhauInventory();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UMordhauInput* GetMordhauInput();
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class AMordhauGameSession* GetMordhauGameSession(class UObject* WorldContextObject);
UFUNCTION(BlueprintPure, BlueprintCallable, Category = "UtilityFunctions")
static class UArchetype* GetArchetypeObject(const struct FCharacterProfile& Profile);
	//bool ConsumeBudget(class AAdvancedCharacter* Character, EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce);
UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
static void ResetController(class AController* Controller);
};
