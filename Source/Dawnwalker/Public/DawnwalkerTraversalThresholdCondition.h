#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerTraversalStateVariable.h"
#include "DawnwalkerTraversalThresholdCondition.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalThresholdCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerTraversalStateVariable StateVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdValue;
    
    FDawnwalkerTraversalThresholdCondition();
};

