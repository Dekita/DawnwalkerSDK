#pragma once
#include "CoreMinimal.h"
#include "ENumericValueType.h"
#include "SliderControl.h"
#include "NumericValueControl.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FNumericValueControl : public FSliderControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumericValueType Type;
    
    FNumericValueControl();
};

