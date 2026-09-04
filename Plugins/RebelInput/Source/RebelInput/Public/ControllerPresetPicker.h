#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "ControllerPresetPicker.generated.h"

USTRUCT(BlueprintType)
struct FControllerPresetPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELINPUT_API FControllerPresetPicker();
};

