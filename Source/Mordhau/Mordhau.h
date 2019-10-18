// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.generated.h"

UENUM(BlueprintType)
enum class EAdvancedCharacterFlags : uint8
{
	Airborne = 0,
	Burning = 1,
	RagdollFalling = 2,
	Jumped = 3,
	EAdvancedCharacterFlags_MAX = 4
};


UENUM(BlueprintType)
enum class EAttackType : uint8
{
	Regular = 0,
	Riposte = 1,
	Combo = 2,
	PostClash = 3,
	Morph = 4,
	EAttackType_MAX = 5
};


UENUM(BlueprintType)
enum class EAttackStage : uint8
{
	Windup = 0,
	Release = 1,
	Recovery = 2,
	EAttackStage_MAX = 3
};


UENUM(BlueprintType)
enum class EBlockedReason : uint8
{
	Parry = 0,
	DisarmParry = 1,
	StunParry = 2,
	ChamberLeft = 3,
	ChamberRight = 4,
	WorldFail = 5,
	ClashA = 6,
	ClashB = 7,
	HitCancel = 8,
	WorldSuccess = 9,
	Hit = 10,
	EnvironmentHit = 11,
	RangedParry = 12,
	RiposteParry = 13,
	DisarmClash = 14,
	EBlockedReason_MAX = 15
};


UENUM(BlueprintType)
enum class ESwayMethod : uint8
{
	Sin = 0,
	Constant = 1,
	ESwayMethod_MAX = 2
};


UENUM(BlueprintType)
enum class EModeSwitchType : uint8
{
	Regular = 0,
	Simple = 1,
	LeftToRightHand = 2,
	RightToLeftHand = 3,
	EModeSwitchType_MAX = 4
};


UENUM(BlueprintType)
enum class ESwitchStage : uint8
{
	Reaching = 0,
	Drawing = 1,
	ESwitchStage_MAX = 2
};


UENUM(BlueprintType)
enum class EFeintType : uint8
{
	Regular = 0,
	Combo = 1,
	Chamber = 2,
	Release = 3,
	EFeintType_MAX = 4
};


UENUM(BlueprintType)
enum class EAIFacingMode : uint8
{
	Movement = 0,
	Location = 1,
	Actor = 2,
	Actor2D = 3,
	Bone = 4,
	EAIFacingMode_MAX = 5
};


UENUM(BlueprintType)
enum class EReservationStatus : uint8
{
	Success = 0,
	Full = 1,
	Failure = 2,
	EReservationStatus_MAX = 3
};


UENUM(BlueprintType)
enum class EMotionType : uint8
{
	Idle = 0,
	Attack = 1,
	Parry = 2,
	Flinched = 3,
	Stunned = 4,
	Feinted = 5,
	Blocked = 6,
	Disarmed = 7,
	EquipmentSwitch = 8,
	DropEquipment = 9,
	Emote = 10,
	EquipmentModeSwitch = 11,
	RangedDraw = 12,
	RangedRelease = 13,
	QuickthrowDraw = 14,
	QuickthrowRelease = 15,
	InteractWith = 16,
	Reload = 17,
	RangedCancel = 18,
	CouchedAttack = 19,
	PommelDraw = 20,
	PommelThrow = 21,
	EmoteCancel = 22,
	Holster = 23,
	EnterVehicle = 24,
	LeaveVehicle = 25,
	RagdollFalling = 26,
	Climbing = 27,
	EMotionType_MAX = 28
};


UENUM(BlueprintType)
enum class EEquipmentCategory : uint8
{
	Undefined = 0,
	OneHanded = 1,
	TwoHanded = 2,
	Ranged = 3,
	Shield = 4,
	Utility = 5,
	EEquipmentCategory_MAX = 6
};


UENUM(BlueprintType)
enum class EEquipmentType : uint8
{
	Undefined = 0,
	MeleeNoAltMode = 1,
	MeleeWithAltMode = 2,
	MeleeThrownAltMode = 3,
	ProjectileWeapon = 4,
	Shield = 5,
	Thrown = 6,
	Utility = 7,
	EEquipmentType_MAX = 8
};


UENUM(BlueprintType)
enum class EAuxiliaryMeshMode : uint8
{
	None = 0,
	Arrow = 1,
	Bolt = 2,
	Scabbard = 3,
	Pommel = 4,
	EAuxiliaryMeshMode_MAX = 5
};


UENUM(BlueprintType)
enum class EPartyState : uint8
{
	Idle = 0,
	Searching = 1,
	Joining = 2,
	EPartyState_MAX = 3
};


UENUM(BlueprintType)
enum class ERichPresenceStatus : uint8
{
	MainMenu = 0,
	LocalMatch = 1,
	OnlineMatch = 2,
	ERichPresenceStatus_MAX = 3
};


UENUM(BlueprintType)
enum class ELobbyMessage : uint8
{
	Invalid = 0,
	Chat = 1,
	Kick = 2,
	Status = 3,
	Profile = 4,
	ELobbyMessage_MAX = 5
};


UENUM(BlueprintType)
enum class EOfficialServerVisibility : uint8
{
	ServerBrowser = 0,
	Matchmaking = 1,
	EOfficialServerVisibility_MAX = 2
};


UENUM(BlueprintType)
enum class EActionSetChangeState : uint8
{
	Active = 0,
	Changing = 1,
	Changed = 2,
	EActionSetChangeState_MAX = 3
};


UENUM(BlueprintType)
enum class EActionSet : uint8
{
	InGame = 0,
	Spectator = 1,
	Menu = 2,
	EActionSet_MAX = 3
};


UENUM(BlueprintType)
enum class EInputLineMode : uint8
{
	SingleLine = 0,
	MultiLine = 1,
	EInputLineMode_MAX = 2
};


UENUM(BlueprintType)
enum class EInputTextMode : uint8
{
	Normal = 0,
	Password = 1,
	EInputTextMode_MAX = 2
};


UENUM(BlueprintType)
enum class EInventoryOperation : uint8
{
	RefreshItems = 0,
	SerializeItems = 1,
	DeserializeItems = 2,
	ConsolidateItems = 3,
	UnlockItem = 4,
	ConsumeItem = 5,
	AddItem = 6,
	AddItems = 7,
	DropItems = 8,
	EInventoryOperation_MAX = 9
};


UENUM(BlueprintType)
enum class EBlockType : uint8
{
	Regular = 0,
	AltRegular = 1,
	EBlockType_MAX = 2
};


UENUM(BlueprintType)
enum class EMovementModifier : uint8
{
	Walk = 0,
	Strafe = 1,
	Backpedal = 2,
	PartialSprint = 3,
	Sprint = 4,
	Rush = 5,
	Chasing = 6,
	Supersprint = 7,
	EMovementModifier_MAX = 8
};


UENUM(BlueprintType)
enum class EScoreFeedReason : uint8
{
	Kill = 0,
	TeamKill = 1,
	Assist = 2,
	Suicide = 3,
	PlayerDamage = 4,
	PlayerTeamDamage = 5,
	OtherDamage = 6,
	OtherTeamDamage = 7,
	Capturing = 8,
	Captured = 9,
	Neutralizing = 10,
	Neutralized = 11,
	Objective = 12,
	Heal = 13,
	WaveCleared = 14,
	Repair = 15,
	VehicleDamage = 16,
	VehicleTeamDamage = 17,
	EScoreFeedReason_MAX = 18
};


UENUM(BlueprintType)
enum class ECameraStyle : uint8
{
	FirstPerson = 0,
	ThirdPerson = 1,
	Fixed = 2,
	ECameraStyle_MAX = 3
};


UENUM(BlueprintType)
enum class EAntiCheat : uint8
{
	Secure_Only = 0,
	Insecure_Only = 1,
	Both = 2,
	EAntiCheat_MAX = 3
};


UENUM(BlueprintType)
enum class EStatSetBy : uint8
{
	Client = 0,
	Server = 1,
	OfficialServer = 2,
	EStatSetBy_MAX = 3
};


UENUM(BlueprintType)
enum class EServerRegion : uint8
{
	East_Asia = 0,
	Europe = 1,
	Oceania = 2,
	Russia = 3,
	South_America = 4,
	US_Central = 5,
	US_East = 6,
	US_West = 7,
	Worldwide = 8,
	EServerRegion_MAX = 9
};


UENUM(BlueprintType)
enum class EAvatarSize : uint8
{
	Small = 0,
	Medium = 1,
	Large = 2,
	EAvatarSize_MAX = 3
};


UENUM(BlueprintType)
enum class ECallResult : uint8
{
	Success = 0,
	Failure = 1,
	ECallResult_MAX = 2
};


UENUM(BlueprintType)
enum class ESoundMix : uint8
{
	Master = 0,
	Effects = 1,
	Music = 2,
	ESoundMix_MAX = 3
};


UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5
};


UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Exclusive = 5,
	EItemRarity_MAX = 6
};


UENUM(BlueprintType)
enum class EProfileValidationFailedReason : uint8
{
	Unset = 0,
	NotEnoughPoints = 1,
	SkillTooLow = 2,
	EProfileValidationFailedReason_MAX = 3
};


UENUM(BlueprintType)
enum class EAttackMove : uint8
{
	RightStrike = 0,
	LeftStrike = 1,
	Stab = 2,
	AltStab = 3,
	Kick = 4,
	Bash = 5,
	Couch = 6,
	Ranged = 7,
	EAttackMove_MAX = 8
};


UENUM(BlueprintType)
enum class EMainWearableSlot : uint8
{
	Head = 0,
	UpperChest = 1,
	Legs = 2,
	EMainWearableSlot_MAX = 3
};


UENUM(BlueprintType)
enum class EWearableSlot : uint8
{
	Head = 0,
	Coif = 1,
	UpperChest = 2,
	LowerChest = 3,
	Shoulders = 4,
	Arms = 5,
	Hands = 6,
	Legs = 7,
	Feet = 8,
	Total = 9,
	Invalid = 10,
	EWearableSlot_MAX = 11
};


UENUM(BlueprintType)
enum class EBudgetType : uint8
{
	Particle = 0,
	Total = 1,
	EBudgetType_MAX = 2
};


UENUM(BlueprintType)
enum class EHorseGear : uint8
{
	Walk = 0,
	Trot = 1,
	Canter = 2,
	Gallop = 3,
	Total = 4,
	EHorseGear_MAX = 5
};


UENUM(BlueprintType)
enum class EMovementRestriction : uint8
{
	None = 0,
	PartialSprint = 1,
	Walk = 2,
	NoMovement = 3,
	EMovementRestriction_MAX = 4
};


UENUM(BlueprintType)
enum class EPerk : uint8
{
	Pugilist = 0,
	Acrobat = 1,
	Fury = 2,
	Peasant = 3,
	Fireproof = 4,
	Huntsman = 5,
	Friendly = 6,
	Rat = 7,
	Cat = 8,
	Wrecker = 9,
	Smith = 10,
	Tenacious = 11,
	SecondWind = 12,
	Bloodlust = 13,
	Rush = 14,
	FleshWound = 15,
	Scavenger = 16,
	Dodge = 17,
	Ranger = 18,
	EPerk_MAX = 19
};


UENUM(BlueprintType)
enum class EDismembermentType : uint8
{
	None = 0,
	Blunt = 1,
	Pierce = 2,
	Cut = 3,
	EDismembermentType_MAX = 4
};


UENUM(BlueprintType)
enum class EAuthStatus : uint8
{
	Unauthenticated = 0,
	Authenticating = 1,
	Authenticated = 2,
	EAuthStatus_MAX = 3
};


UENUM(BlueprintType)
enum class EParryStage : uint8
{
	Parry = 0,
	Recovery = 1,
	EParryStage_MAX = 2
};


USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentPartEntry
{
	GENERATED_USTRUCT_BODY()

public:

	FEquipmentPartEntry() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class Uclass*> Parts;

};

USTRUCT(BlueprintType, Blueprintable)
struct FPatternInfo
{
	GENERATED_USTRUCT_BODY()

public:

	FPatternInfo() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture2D* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor3;

};

/*UENUM(BlueprintType)
enum class EAttachLocation : uint8
{
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};*/
USTRUCT(BlueprintType, Blueprintable)
struct FScriptMulticastDelegate
{
	GENERATED_USTRUCT_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentSkinEntry
{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText SkinName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentPartEntry> PartTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> ColorTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPatternInfo> Patterns;


};

USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentCustomization
{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> Colors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> Parts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Pattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Skin;


};
USTRUCT(BlueprintType, Blueprintable)
struct FActorSetAndArray
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AActor*>                              Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSet<class AActor*> Set;

};
USTRUCT(BlueprintType, Blueprintable)
struct FWoundInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   WoundType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     WoundSize;
};


USTRUCT(BlueprintType, Blueprintable)
struct FSpineSpaceAdditive
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    head;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    Neck;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    Spine1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    LeftShoulder;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    LeftArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    LeftForearm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    LeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    RightShoulder;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    RightArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    RightForearm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    RightHand;
};
USTRUCT(BlueprintType, Blueprintable)
struct FHighMidLowSpineSpaceAdditive
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive                         High;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive                         Mid;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive                         Low;
};

USTRUCT(BlueprintType, Blueprintable)
struct FAnglingSpineSpaceAdditive
{
	GENERATED_BODY()
public:
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive               Right;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive               Left;
};
USTRUCT(BlueprintType, Blueprintable)
struct FAttackInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bCanCombo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bNoFlinch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Windup;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              ComboWindupIncrease;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Release;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              FeintLockOut;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                FeintCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                ChamberFeintCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                ChamberCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                MorphCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   TurnCaps;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat*                                 TurnCapCurve;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat*                                 HitEffectIKWeightCurve;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              HitEffectSpeedUpExponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StaminaDrain;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float>                                      Damage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float>                                      HeadBonus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float>                                      LegBonus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              WoodDamage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StoneDamage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bStopOnHit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bDrainAllStamOnBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bRagdollOnBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              ChipDamagePercentageOnBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bRagdollOnHit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bDismountsHorseRider;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bDismountsLadderUser;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MissStaminaCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              HitStaminaReward;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MissRecovery;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              HitKockbackFactor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              FollowAttackDirectionFactor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FWoundInfo>                          WoundInfoArray;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass*                                      HitShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass*                                      HitStopShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSet<UObject*> IgnoreBones;
};
USTRUCT(BlueprintType, Blueprintable)
struct FSteamID
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FWearableCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                ID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8>                              Colors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8>                              Team1Colors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8>                              Team2Colors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      Pattern;
};
USTRUCT(BlueprintType, Blueprintable)
struct FCharacterGearCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FWearableCustomization>              Wearables;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FEquipmentCustomization>             Equipment;
};
USTRUCT(BlueprintType, Blueprintable)
struct FFaceCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                                   Translate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                                   Rotate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                                   Scale;
};
USTRUCT(BlueprintType, Blueprintable)
struct FSkillsCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                          Perks;
};
USTRUCT(BlueprintType, Blueprintable)
struct FAppearanceCustomization
{

	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                Emblem;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                              EmblemColors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      MetalRoughnessScale;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      MetalTint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Age;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Voice;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      VoicePitch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsFemale;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Fat;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Skinny;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Strong;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      SkinColor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Face;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      EyeColor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      HairColor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Hair;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      FacialHair;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Eyebrows;
};
USTRUCT(BlueprintType, Blueprintable)
struct FCharacterProfile
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText                                       Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterGearCustomization                 GearCustomization;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FAppearanceCustomization                    AppearanceCustomization;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FFaceCustomization                          FaceCustomization;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSkillsCustomization                        SkillsCustomization;
};
USTRUCT(BlueprintType, Blueprintable)
struct FStatBase
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EStatSetBy                                         SetBy;

};
USTRUCT(BlueprintType, Blueprintable)
struct FStatInt : public FStatBase
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FAchievement
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EStatSetBy                                         SetBy;
};
USTRUCT(BlueprintType, Blueprintable)
struct FSoundMixInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundMix*                                   SoundMix;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class USoundClass*>                         SoundClasses;
};
/*UENUM(BlueprintType)
enum class EPhysicalSurface : uint8
{
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};*/
USTRUCT(BlueprintType, Blueprintable)
struct FDecalInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInterface*                          Material;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     Size;
};
USTRUCT(BlueprintType, Blueprintable)
struct FReplicatedProjectileInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector_NetQuantize                         Location;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize                         Orientation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantizeNormal                   HitNormal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              BounceForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor>                       Creator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      HitSurface;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bHasStopped;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bHasHitWorld;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      HitCounter;
};
/* ALREADY EXISTS IN ENGINETYPES.h
USTRUCT(BlueprintType, Blueprintable)
struct FHitResult
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      bBlockingHit : 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      bStartPenetrating : 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                FaceIndex;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Time;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Distance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize                         Location;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize                         ImpactPoint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantizeNormal                   Normal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantizeNormal                   ImpactNormal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize                         TraceStart;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize                         TraceEnd;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              PenetrationDepth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                Item;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor>                       Actor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       BoneName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       MyBoneName;
};
*/
UENUM(BlueprintType)
enum E_SkirmishRoundStage
{
	WaitingforPlayers = 0,
	RoundStart = 1,
	RoundPlay = 2,
	RoundEnd = 3,
	Max = 4
};
USTRUCT(BlueprintType, Blueprintable)
struct FSTRUCT_SkirmishRoundInfo//
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TEnumAsByte<E_SkirmishRoundStage> Stage;//RoundInfo
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Winner;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float StartTime;

};

USTRUCT(BlueprintType, Blueprintable)
struct FSTRUCT_MatchEndInfo//
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauPlayerState* Winner;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int WinnerTeam;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float WinnerScore;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float OtherScore;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool Draw;
};
USTRUCT(BlueprintType, Blueprintable)
struct FEmoteEntry
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText                                       EmoteName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass*                                      EmoteMotion;
};

USTRUCT(BlueprintType, Blueprintable)
struct FNetMotion
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      ID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      MotionType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      MotionParam0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      MotionParam1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      MotionParam2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      MotionDynamicParam;
};
USTRUCT(BlueprintType, Blueprintable)
struct FNetBlock
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      BlockedReason;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      BlockedMove;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      BlockType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      BlockedAngle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor>                       BlockingActor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      EnsureReplication;
};

USTRUCT(BlueprintType, Blueprintable)
struct FDamageRecord
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AController>                  Source;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Time;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Damage;
};
USTRUCT(BlueprintType, Blueprintable)
struct FVehicleTransitionInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimSequence*                               Animation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Duration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              BlendTime;
};
USTRUCT(BlueprintType, Blueprintable)
struct FNetDamage
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      PackedType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      bone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      PackedFlags;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector_NetQuantize                         Point;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor>                       DamageSource;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor>                       DamageAgent;
};

USTRUCT(BlueprintType, Blueprintable)
struct FSphericalLimbBounds
{


	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       StartSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       EndSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Radius;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       AttachSocket;
};
USTRUCT(BlueprintType, Blueprintable)
struct FFloatAndVector
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Float;                                                    
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     Vector;                                                   
};

//UENUM(BlueprintType)
//enum class ETickingGroup : uint8
//{
//	TG_PrePhysics = 0,
//	TG_StartPhysics = 1,
//	TG_DuringPhysics = 2,
//	TG_EndPhysics = 3,
//	TG_PostPhysics = 4,
//	TG_PostUpdateWork = 5,
//	TG_LastDemotable = 6,
//	TG_NewlySpawned = 7,
//	TG_MAX = 8
//};

//USTRUCT(BlueprintType, Blueprintable)
//struct FTickFunction
//{
//	GENERATED_BODY()
//	TEnumAsByte<ETickingGroup>                         TickGroup;
//	TEnumAsByte<ETickingGroup>                         EndTickGroup;
//	uint8                                     bTickEvenWhenPaused : 1;
//	uint8                                     bCanEverTick : 1;
//	uint8                                     bStartWithTickEnabled : 1;
//	uint8                                     bAllowTickOnDedicatedServer : 1;
//	float                                              TickInterval;
//};

//USTRUCT(BlueprintType, Blueprintable)
//struct FPrePhysTickFunction : public FTickFunction
//{
//	GENERATED_BODY()
//};


USTRUCT(BlueprintType, Blueprintable)
struct FWoundMaterialData
{

	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     Location;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     UpVector;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     RightVector;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     ForwardVector;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   WoundType;
};
//UENUM(BlueprintType)
//enum class EAttachLocation : uint8
//{
//	KeepRelativeOffset = 0,
//	KeepWorldPosition = 1,
//	SnapToTarget = 2,
//	SnapToTargetIncludingScale = 3,
//	EAttachLocation_MAX = 4
//};




USTRUCT(BlueprintType, Blueprintable)
struct FMordhauColorItemTable
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText                                       TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<class UMordhauColor>>                              Entries;
};

USTRUCT(BlueprintType, Blueprintable)
struct FFindLobbySessionsFilter
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                MinOpenSlots;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                PreferredOpenSlots;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                MMR;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString>                             GameModes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EServerRegion                                      Region;
	
};




USTRUCT(BlueprintType, Blueprintable)
struct FPlayerProfile
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                Rank;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                Banner;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FCharacterProfile                           Character;
};



USTRUCT(BlueprintType, Blueprintable)
struct FHorseGearInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	
	float                                              MaxSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MaxAcceleration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bAllowJump;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bCanRiderRegenHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bCanRiderRegenStamina;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bCanHorseRegen;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass*                                      HeadBobShake;
};

USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentHolsterInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       HolsterSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bHidden;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bHiddenIn1P;
	

UPROPERTY(BlueprintReadWrite, EditAnywhere)
class UAnimMontage*                                DrawAnimation;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
class UAnimMontage*                                DrawAnimation1P;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bUseIKDrawing;
	
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FTransform                                  Offset;
};




USTRUCT(BlueprintType, Blueprintable)
struct FFootGroundingLimb
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       TraceEndBone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
FName                                       TraceStartBone;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
FName                                       FootstepBone;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              TraceDistance;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector2D                                   UpValueLimits;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FHitResult                                  TraceResult;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              RootSpaceImpactZ;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FRotator                                    RotationOffset;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector                                     InternalTranslationOffset;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector                                     TranslationOffset;

};




USTRUCT(BlueprintType, Blueprintable)
struct FMordhauWebAPIRequest
{
	GENERATED_BODY()

};



USTRUCT(BlueprintType, Blueprintable)
struct FCachedAvatars
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)

	TWeakObjectPtr<class UTexture2D>                   Small;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
TWeakObjectPtr<class UTexture2D>                   Medium;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
TWeakObjectPtr<class UTexture2D>                   Large;
};



USTRUCT(BlueprintType, Blueprintable)
struct FColorTableEntry
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText                                       EntryName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FLinearColor                                Color;
};

USTRUCT(BlueprintType, Blueprintable)
struct FMordhauColorTable
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText                                       TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FColorTableEntry>                    Entries;
};





USTRUCT(BlueprintType, Blueprintable)
struct FCharacterInventory
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AMordhauEquipment*                           RightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
class AMordhauEquipment*                           LeftHand;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
TArray<class AMordhauEquipment*>                   Equipment;
};


USTRUCT(BlueprintType, Blueprintable)
struct FItemStack
{
	GENERATED_BODY()	
};
USTRUCT(BlueprintType, Blueprintable)
struct FUnlockRecipe
{
	GENERATED_BODY()
};








USTRUCT(BlueprintType, Blueprintable)
struct FSerializedItems
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
uint8                                          BufferSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FString                                     Data;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                          Timestamp;
};


USTRUCT(BlueprintType, Blueprintable)
struct FServerStats
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                    TargetTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    MinTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    MaxTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    AvgTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    InBytesPerSecond;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    OutBytesPerSecond;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    MaxInternetClientRate;
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    NumPlayers;
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                    MaxPlayers;
};


/*struct FMinimalViewInfo
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
	float                                              FOV;
	float                                              DesiredFOV;
	float                                              OrthoWidth;
	float                                              OrthoNearClipPlane;
	float                                              OrthoFarClipPlane;
	float                                              AspectRatio;
	unsigned char                                      bConstrainAspectRatio : 1;
	unsigned char                                      bUseFieldOfViewForLOD : 1;
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;
	float                                              PostProcessBlendWeight;
	struct FPostProcessSettings                        PostProcessSettings;
	struct FVector2D                                   OffCenterProjectionOffset;
};*/

USTRUCT(BlueprintType, Blueprintable)
struct FBP_ToolBoxSpawnable
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UStaticMesh*                                 Preview_5_2199FA324279776E26CF8D94C5B5B71B;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USkeletalMesh*                               PreviewSkeletal_16_F127718E4CC9262BB43BBF846E200428;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                     Cost_2_3FE5E6C242579A2FB40131B381BE0852;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator                                    RotationOffset_13_ED46831A45C264F69093958C73920A03;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator                                    RotationOffsetPreview_19_166AE01D40328502CF6878924CF328B3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     ScalePreview_39_95AAE0F84CB90D4DB603DFBF354166F0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass*                                      Class_9_52116F214F63A71A89EE438ACAE9AE21;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       PlaceableLimitName_22_3ED07C554A73DE74451717868639F95D;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                PleaceableLimitMax_26_9860251E42753A8D1391B39EF7D66532;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               PerformCapsuleCheck_28_5608460A4A56B455116FB2BBC9083067;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)

		float                                              CapsuleCheckRadius_31_281444B8406D0DA743BCBAB34686B9AF;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CapsuleCheckHalfHeight_33_EBD4FE0A4E5A667392A5628B1040B9A4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     SpawnActorOffset_36_8DFF3968447DA5478505C4A626FC494A;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               DoNotAttach_41_23D7DA6D43927E8B2BD03896E629F39B;
};

USTRUCT(BlueprintType, Blueprintable)
struct FSessionSearchResult
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FServerSearchResult : public FSessionSearchResult
{
	GENERATED_BODY()
};


USTRUCT(BlueprintType, Blueprintable)
struct FLobbySearchResult : public FSessionSearchResult
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FMapInfo
{

	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString                                     GameModeMapName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UGameModeMetadata*                           GameModeMetadata;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMapMetadata*                                MapMetadata;
};
USTRUCT(BlueprintType, Blueprintable)
struct FServerAddress
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                           IP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                          Port;

};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArrayByteWithVersion
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8>                              Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      Version;

};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArrayShortWithVersion
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                              Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Version;

};




USTRUCT(BlueprintType, Blueprintable)
struct FRepArrayAppearanceWithVersion
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                              Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Version;

};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArraySkillsWithVersion
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSkillsCustomization                              Skills;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                      Version;

};


USTRUCT(BlueprintType, Blueprintable)
struct FStatFloat
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType, Blueprintable)
struct FStatAvgRate : public FStatFloat
{
	GENERATED_BODY()
};
//UENUM(BlueprintType)
//enum class ECallResult : uint8
//{
//	Success = 0,
//	Failure = 1,
//	ECallResult_MAX = 2
//};
USTRUCT(BlueprintType, Blueprintable)
struct FProgressAchievementInt : public FAchievement
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FProgressAchievementFloat : public FAchievement
{
	GENERATED_BODY()
};
