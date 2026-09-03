#pragma once
#include "CoreMinimal.h"
#include "CustomNumericDisplay.h"
#include "ENumericValueType.h"
#include "RemapValueDisplay.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FRemapValueDisplay : public FCustomNumericDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresentedMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresentedMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumericValueType RemappedType;
    
    FRemapValueDisplay();
};

