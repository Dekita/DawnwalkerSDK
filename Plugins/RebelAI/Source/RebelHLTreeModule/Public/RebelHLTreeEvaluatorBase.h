#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeNodeBase.h"
#include "RebelHLTreeEvaluatorBase.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeEvaluatorBase : public FRebelHLTreeNodeBase {
    GENERATED_BODY()
public:
    FRebelHLTreeEvaluatorBase();
};

