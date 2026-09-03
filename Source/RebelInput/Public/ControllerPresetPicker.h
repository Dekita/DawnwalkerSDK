#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "ControllerPresetPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELINPUT_API FControllerPresetPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FControllerPresetPicker();
};

