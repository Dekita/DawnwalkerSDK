#pragma once
#include "CoreMinimal.h"
#include "RebelSettingControlType.h"
#include "PickerControlBase.generated.h"

USTRUCT(BlueprintType)
struct FPickerControlBase : public FRebelSettingControlType {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FPickerControlBase();
};

