#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelSettingControlType.h"
#include "SliderControl.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FSliderControl : public FRebelSettingControlType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct CustomDisplayClass;
    
    FSliderControl();
};

