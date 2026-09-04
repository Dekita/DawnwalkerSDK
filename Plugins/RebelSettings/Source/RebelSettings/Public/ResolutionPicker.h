#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "ResolutionPicker.generated.h"

USTRUCT(BlueprintType)
struct FResolutionPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FResolutionPicker();
};

