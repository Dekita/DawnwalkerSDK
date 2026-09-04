#pragma once
#include "CoreMinimal.h"
#include "PickerSetting.generated.h"

USTRUCT(BlueprintType)
struct FPickerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayLabel;
    
    REBELSETTINGS_API FPickerSetting();
};

