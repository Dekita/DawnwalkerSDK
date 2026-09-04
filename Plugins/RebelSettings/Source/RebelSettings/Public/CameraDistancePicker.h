#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "CameraDistancePicker.generated.h"

USTRUCT(BlueprintType)
struct FCameraDistancePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FCameraDistancePicker();
};

