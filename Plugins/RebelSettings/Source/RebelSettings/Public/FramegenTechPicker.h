#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "FramegenTechPicker.generated.h"

USTRUCT(BlueprintType)
struct FFramegenTechPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FFramegenTechPicker();
};

