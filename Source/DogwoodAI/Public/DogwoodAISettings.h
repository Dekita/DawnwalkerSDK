#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EAttackStrength.h"
#include "EBlockingDirection.h"
#include "ECombatModeType.h"
#include "EWeaponAnimationType.h"
#include "EWeaponSlot.h"
#include "EWeaponSwingDirection.h"
#include "EWeaponType.h"
#include "EEquipmentSlotType.h"
#include "GameplayTagContainer.h"
#include "DogwoodAISettings.generated.h"

class UDogwoodAISettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODAI_API UDogwoodAISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, FGameplayTag> WeaponSwingDirectionToGenericDirectionTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EWeaponSwingDirection> GenericDirectionTagToWeaponSwingDirection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EBlockingDirection> GenericDirectionTagToBlockingDirection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackStrength, FGameplayTag> AttackStrengthToGenericAttackStrengthTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSlot, FGameplayTag> WeaponSlotToGenericCharacterSlotTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECombatModeType, FGameplayTag> CombatModeTypeToDogwoodAICombatModeTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECombatModeType, FGameplayTag> CombatModeTypeToCharacterStateTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> GenericDirectionTagToCombatActionDirectionTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> GenericPoseTagToCombatPoseTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> GenericAttackStrengthTagToCombatAttackStrengthTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> CombatActionDirectionTagToGenericDirectionTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> CombatPoseTagToGenericPoseTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> CombatAttackStrengthTagToGenericAttackStrengthTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EEquipmentSlotType> DogwoodAIInventorySlotTagToEquipmentSlotType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EWeaponSlot> CharacterSlotTagToWeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EWeaponAnimationType> CombatModeTagToWeaponAnimationType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EWeaponType> WeaponTagToWeaponSoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredTimeBetweenAttacksToAvoidMashingPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAttacksRequiredForMashingPenalty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandardCapsuleRadius;
    
    UDogwoodAISettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDogwoodAISettings* Get_BP();
    
};

