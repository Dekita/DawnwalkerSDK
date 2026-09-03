#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeConditionEvaluationMode.h"
#include "ERebelHLTreeConditionOperand.h"
#include "RebelHLTreeNodeBase.h"
#include "RebelHLTreeConditionBase.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeConditionBase : public FRebelHLTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeConditionOperand Operand;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DeltaIndent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeConditionEvaluationMode EvaluationMode;
    
    FRebelHLTreeConditionBase();
};

