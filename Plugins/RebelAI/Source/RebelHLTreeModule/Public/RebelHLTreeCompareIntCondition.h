#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeCompareIntCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeCompareIntCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenericAICheck Operator;
    
    FRebelHLTreeCompareIntCondition();
};

