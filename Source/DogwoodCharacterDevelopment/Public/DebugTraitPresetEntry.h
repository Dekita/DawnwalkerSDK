#pragma once
#include "CoreMinimal.h"
#include "DebugTraitPresetEntry.generated.h"

class UTraitAsset;

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FDebugTraitPresetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraitAsset* Trait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    FDebugTraitPresetEntry();
};

