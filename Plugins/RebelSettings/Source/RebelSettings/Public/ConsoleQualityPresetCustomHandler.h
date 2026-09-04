#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "ConsoleQualityPresetCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct FConsoleQualityPresetCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FConsoleQualityPresetCustomHandler();
};

