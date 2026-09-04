#pragma once
#include "CoreMinimal.h"
#include "SliderControl.h"
#include "ColorblindSeverityStrenghtControl.generated.h"

USTRUCT(BlueprintType)
struct FColorblindSeverityStrenghtControl : public FSliderControl {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FColorblindSeverityStrenghtControl();
};

