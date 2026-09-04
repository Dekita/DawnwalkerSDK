#pragma once
#include "CoreMinimal.h"
#include "AudioWeaponItemData.generated.h"

class UAkSwitchValue;
class UItemWeaponDataAsset;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioWeaponItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemWeaponDataAsset* Item;
    
    FAudioWeaponItemData();
};

