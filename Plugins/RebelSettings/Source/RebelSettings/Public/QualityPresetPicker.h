#pragma once
#include "CoreMinimal.h"
#include "QualityPicker.h"
#include "QualityPresetPicker.generated.h"

USTRUCT(BlueprintType)
struct FQualityPresetPicker : public FQualityPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCustom;
    
    REBELSETTINGS_API FQualityPresetPicker();
};

