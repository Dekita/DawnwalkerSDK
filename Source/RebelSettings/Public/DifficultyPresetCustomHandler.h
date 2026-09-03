#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "DifficultyPresetCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FDifficultyPresetCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    FDifficultyPresetCustomHandler();
};

