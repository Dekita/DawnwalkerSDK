#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "CombatCameraDistancePicker.generated.h"

USTRUCT(BlueprintType)
struct FCombatCameraDistancePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FCombatCameraDistancePicker();
};

