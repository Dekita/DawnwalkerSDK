#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeCompareFloatConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeCompareFloatConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Left;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Right;
    
    FRebelHLTreeCompareFloatConditionInstanceData();
};

