#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeCompareDistanceCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeCompareDistanceCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenericAICheck Operator;
    
    FRebelHLTreeCompareDistanceCondition();
};

