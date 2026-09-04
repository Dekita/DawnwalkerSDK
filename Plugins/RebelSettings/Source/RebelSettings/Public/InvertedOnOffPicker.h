#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "InvertedOnOffPicker.generated.h"

USTRUCT(BlueprintType)
struct FInvertedOnOffPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FInvertedOnOffPicker();
};

