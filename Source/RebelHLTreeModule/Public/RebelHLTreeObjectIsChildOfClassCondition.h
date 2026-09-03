#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeObjectIsChildOfClassCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeObjectIsChildOfClassCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelHLTreeObjectIsChildOfClassCondition();
};

