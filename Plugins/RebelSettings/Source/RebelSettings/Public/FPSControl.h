#pragma once
#include "CoreMinimal.h"
#include "SliderControl.h"
#include "FPSControl.generated.h"

USTRUCT(BlueprintType)
struct FFPSControl : public FSliderControl {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FFPSControl();
};

