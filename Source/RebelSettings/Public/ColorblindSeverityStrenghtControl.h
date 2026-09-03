#pragma once
#include "CoreMinimal.h"
#include "SliderControl.h"
#include "ColorblindSeverityStrenghtControl.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FColorblindSeverityStrenghtControl : public FSliderControl {
    GENERATED_BODY()
public:
    FColorblindSeverityStrenghtControl();
};

