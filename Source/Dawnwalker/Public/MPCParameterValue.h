#pragma once
#include "CoreMinimal.h"
#include "MPCParameterValue.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FMPCParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValue;
    
    FMPCParameterValue();
};

