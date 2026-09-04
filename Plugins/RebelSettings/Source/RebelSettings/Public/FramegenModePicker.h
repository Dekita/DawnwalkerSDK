#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "FramegenModePicker.generated.h"

USTRUCT(BlueprintType)
struct FFramegenModePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FFramegenModePicker();
};

