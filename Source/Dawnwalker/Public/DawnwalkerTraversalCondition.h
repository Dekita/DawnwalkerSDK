#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerTraversalStateCondition.h"
#include "DawnwalkerTraversalThresholdCondition.h"
#include "DawnwalkerTraversalCondition.generated.h"

class URebelLocomotionConditionSet;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDawnwalkerTraversalStateCondition> StateConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDawnwalkerTraversalThresholdCondition> ThresholdConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelLocomotionConditionSet* LocomotionCondition;
    
    FDawnwalkerTraversalCondition();
};

