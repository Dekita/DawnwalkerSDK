#pragma once
#include "CoreMinimal.h"
#include "CustomNumericDisplay.h"
#include "FPSValueDisplay.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FFPSValueDisplay : public FCustomNumericDisplay {
    GENERATED_BODY()
public:
    FFPSValueDisplay();
};

