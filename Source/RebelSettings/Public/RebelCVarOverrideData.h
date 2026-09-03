#pragma once
#include "CoreMinimal.h"
#include "RebelCVarOverrideData.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FRebelCVarOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OriginalCVarValue;
    
    FRebelCVarOverrideData();
};

