#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "UpscailingModePicker.generated.h"

USTRUCT(BlueprintType)
struct FUpscailingModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FUpscailingModePicker();
};

