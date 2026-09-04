#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerTraversalStateVariable.h"
#include "DawnwalkerTraversalThresholdCondition.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerTraversalThresholdCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerTraversalStateVariable StateVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdValue;
    
    DAWNWALKER_API FDawnwalkerTraversalThresholdCondition();
};

