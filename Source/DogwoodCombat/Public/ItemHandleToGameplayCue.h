#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTag.h"
#include "ItemHandleToGameplayCue.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FItemHandleToGameplayCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* ItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FGameplayCueTag> GameplayCueTagByAbilityLevel;
    
    FItemHandleToGameplayCue();
};

