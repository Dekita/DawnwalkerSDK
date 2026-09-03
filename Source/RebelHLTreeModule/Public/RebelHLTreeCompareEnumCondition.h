#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeCompareEnumCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeCompareEnumCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelHLTreeCompareEnumCondition();
};

