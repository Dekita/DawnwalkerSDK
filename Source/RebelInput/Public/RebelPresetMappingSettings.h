#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RebelPresetMappingSettings.generated.h"

USTRUCT(BlueprintType)
struct REBELINPUT_API FRebelPresetMappingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    FRebelPresetMappingSettings();
};

