#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "ConsoleQualityPresetCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FConsoleQualityPresetCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    FConsoleQualityPresetCustomHandler();
};

