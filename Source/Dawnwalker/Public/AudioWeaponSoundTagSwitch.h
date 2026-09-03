#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioWeaponSoundTagSwitch.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioWeaponSoundTagSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> SWITCH;
    
    FAudioWeaponSoundTagSwitch();
};

