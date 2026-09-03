#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "RegularInvertedPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FRegularInvertedPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FRegularInvertedPicker();
};

