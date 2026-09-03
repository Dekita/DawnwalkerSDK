#pragma once
#include "CoreMinimal.h"
#include "EItemWeaponSubtype.h"
#include "AudioWeaponTypeData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioWeaponTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemWeaponSubtype WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SWITCH;
    
    FAudioWeaponTypeData();
};

