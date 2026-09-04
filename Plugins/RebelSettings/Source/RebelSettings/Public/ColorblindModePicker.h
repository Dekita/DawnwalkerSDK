#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "ColorblindModePicker.generated.h"

USTRUCT(BlueprintType)
struct FColorblindModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FColorblindModePicker();
};

