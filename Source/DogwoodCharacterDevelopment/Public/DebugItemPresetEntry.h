#pragma once
#include "CoreMinimal.h"
#include "DebugItemPresetEntry.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FDebugItemPresetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MinItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquip;
    
    FDebugItemPresetEntry();
};

