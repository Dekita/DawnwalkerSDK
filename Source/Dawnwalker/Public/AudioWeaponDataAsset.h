#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AudioNPCWhoosh.h"
#include "AudioWeaponItemData.h"
#include "AudioWeaponSoundTagSwitch.h"
#include "AudioWeaponTaggedTypeData.h"
#include "AudioWeaponTypeData.h"
#include "AudioWeaponDataAsset.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioWeaponDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> Unequips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioWeaponTypeData> MainCharacterTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioWeaponItemData> MainCharacterItemOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioWeaponTypeData> NPCDefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioWeaponTaggedTypeData> NPCTypeTaggedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioWeaponSoundTagSwitch> WhooshWeaponSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioNPCWhoosh> NPCWhooshEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> NPCWhooshEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> NPCWhooshResetSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> MainCharacterWhooshEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> MainCharacterWhooshResetSwitch;
    
    UAudioWeaponDataAsset();

};

