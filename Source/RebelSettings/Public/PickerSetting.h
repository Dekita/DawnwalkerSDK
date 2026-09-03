#pragma once
#include "CoreMinimal.h"
#include "PickerSetting.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FPickerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayLabel;
    
    FPickerSetting();
};

