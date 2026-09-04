#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "RegularInvertedPicker.generated.h"

USTRUCT(BlueprintType)
struct FRegularInvertedPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FRegularInvertedPicker();
};

