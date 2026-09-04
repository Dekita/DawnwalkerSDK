#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "QualityPresetCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct FQualityPresetCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FQualityPresetCustomHandler();
};

