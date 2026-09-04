#pragma once
#include "CoreMinimal.h"
#include "QualityPicker.h"
#include "ConsoleQualityPresetPicker.generated.h"

USTRUCT(BlueprintType)
struct FConsoleQualityPresetPicker : public FQualityPicker {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FConsoleQualityPresetPicker();
};

