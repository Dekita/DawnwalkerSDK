#pragma once
#include "CoreMinimal.h"
#include "CustomNumericDisplay.h"
#include "FPSValueDisplay.generated.h"

USTRUCT(BlueprintType)
struct FFPSValueDisplay : public FCustomNumericDisplay {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FFPSValueDisplay();
};

