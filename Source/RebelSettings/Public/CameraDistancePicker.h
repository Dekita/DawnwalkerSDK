#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "CameraDistancePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FCameraDistancePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FCameraDistancePicker();
};

