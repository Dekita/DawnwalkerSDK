#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "WindowModePicker.generated.h"

USTRUCT(BlueprintType)
struct FWindowModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FWindowModePicker();
};

