#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "OnOffPicker.generated.h"

USTRUCT(BlueprintType)
struct FOnOffPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FOnOffPicker();
};

