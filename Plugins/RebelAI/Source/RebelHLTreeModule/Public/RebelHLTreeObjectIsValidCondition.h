#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeObjectIsValidCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeObjectIsValidCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelHLTreeObjectIsValidCondition();
};

