#pragma once
#include "CoreMinimal.h"
#include "HUDStackEntry.generated.h"

class UHUDVisibilityPreset;

USTRUCT(BlueprintType)
struct FHUDStackEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityPreset* Preset;
    
    DOGWOODUI_API FHUDStackEntry();
};

