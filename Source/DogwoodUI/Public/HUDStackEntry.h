#pragma once
#include "CoreMinimal.h"
#include "HUDStackEntry.generated.h"

class UHUDVisibilityPreset;

USTRUCT(BlueprintType)
struct DOGWOODUI_API FHUDStackEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityPreset* Preset;
    
    FHUDStackEntry();
};

