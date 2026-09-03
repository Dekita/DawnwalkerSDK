#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "UpscalingTechnologyPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FUpscalingTechnologyPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FUpscalingTechnologyPicker();
};

