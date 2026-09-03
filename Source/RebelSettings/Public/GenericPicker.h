#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "PickerSetting.h"
#include "GenericPicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FGenericPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPickerSetting> Settings;
    
    FGenericPicker();
};

