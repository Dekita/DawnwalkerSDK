#pragma once
#include "CoreMinimal.h"
#include "OnOffPicker.h"
#include "OnOffPickerBlockedByDLSS.generated.h"

USTRUCT(BlueprintType)
struct FOnOffPickerBlockedByDLSS : public FOnOffPicker {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FOnOffPickerBlockedByDLSS();
};

