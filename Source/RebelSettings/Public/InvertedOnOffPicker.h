#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "InvertedOnOffPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FInvertedOnOffPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FInvertedOnOffPicker();
};

