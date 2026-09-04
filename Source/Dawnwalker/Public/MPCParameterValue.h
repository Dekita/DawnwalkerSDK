#pragma once
#include "CoreMinimal.h"
#include "MPCParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FMPCParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValue;
    
    DAWNWALKER_API FMPCParameterValue();
};

