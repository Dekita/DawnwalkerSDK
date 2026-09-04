#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "DifficultyPresetCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyPresetCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FDifficultyPresetCustomHandler();
};

