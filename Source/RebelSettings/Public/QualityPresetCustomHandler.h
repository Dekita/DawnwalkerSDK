#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "QualityPresetCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FQualityPresetCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    FQualityPresetCustomHandler();
};

