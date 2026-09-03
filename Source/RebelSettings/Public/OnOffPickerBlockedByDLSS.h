#pragma once
#include "CoreMinimal.h"
#include "OnOffPicker.h"
#include "OnOffPickerBlockedByDLSS.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FOnOffPickerBlockedByDLSS : public FOnOffPicker {
    GENERATED_BODY()
public:
    FOnOffPickerBlockedByDLSS();
};

