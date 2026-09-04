#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "QualityPicker.generated.h"

USTRUCT(BlueprintType)
struct FQualityPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FQualityPicker();
};

