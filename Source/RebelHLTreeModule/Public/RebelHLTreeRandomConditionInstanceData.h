#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeRandomConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeRandomConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    FRebelHLTreeRandomConditionInstanceData();
};

