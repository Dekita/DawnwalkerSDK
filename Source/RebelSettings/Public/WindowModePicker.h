#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "WindowModePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FWindowModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FWindowModePicker();
};

