#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "ResolutionPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FResolutionPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FResolutionPicker();
};

