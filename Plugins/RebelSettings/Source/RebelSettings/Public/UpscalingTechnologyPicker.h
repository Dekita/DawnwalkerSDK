#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "UpscalingTechnologyPicker.generated.h"

USTRUCT(BlueprintType)
struct FUpscalingTechnologyPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FUpscalingTechnologyPicker();
};

