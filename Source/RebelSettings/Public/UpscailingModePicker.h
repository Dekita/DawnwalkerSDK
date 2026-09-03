#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "UpscailingModePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FUpscailingModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FUpscailingModePicker();
};

