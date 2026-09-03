#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "QualityPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FQualityPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    FQualityPicker();
};

