#pragma once
#include "CoreMinimal.h"
#include "RebelSettingControlType.h"
#include "PickerControlBase.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FPickerControlBase : public FRebelSettingControlType {
    GENERATED_BODY()
public:
    FPickerControlBase();
};

