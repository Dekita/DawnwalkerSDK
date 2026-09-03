#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "OnOffPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FOnOffPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FOnOffPicker();
};

