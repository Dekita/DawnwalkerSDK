#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeRandomCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeRandomCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    FRebelHLTreeRandomCondition();
};

