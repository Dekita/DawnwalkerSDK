#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "FramegenModePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FFramegenModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FFramegenModePicker();
};

