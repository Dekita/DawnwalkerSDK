#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "ColorblindModePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FColorblindModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FColorblindModePicker();
};

