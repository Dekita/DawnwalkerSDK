#pragma once
#include "CoreMinimal.h"
#include "SliderControl.h"
#include "FPSControl.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FFPSControl : public FSliderControl {
    GENERATED_BODY()
public:
    FFPSControl();
};

