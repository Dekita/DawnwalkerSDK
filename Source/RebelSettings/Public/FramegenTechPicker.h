#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "FramegenTechPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FFramegenTechPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FFramegenTechPicker();
};

