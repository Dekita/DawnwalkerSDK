#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "CombatCameraDistancePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FCombatCameraDistancePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FCombatCameraDistancePicker();
};

