#pragma once
#include "CoreMinimal.h"
#include "QualityPicker.h"
#include "ConsoleQualityPresetPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FConsoleQualityPresetPicker : public FQualityPicker {
    GENERATED_BODY()
public:
    FConsoleQualityPresetPicker();
};

