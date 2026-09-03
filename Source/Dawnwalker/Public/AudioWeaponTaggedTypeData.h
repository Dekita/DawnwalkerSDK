#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioWeaponTypeData.h"
#include "AudioWeaponTaggedTypeData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioWeaponTaggedTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioWeaponTypeData> TagEntries;
    
    FAudioWeaponTaggedTypeData();
};

