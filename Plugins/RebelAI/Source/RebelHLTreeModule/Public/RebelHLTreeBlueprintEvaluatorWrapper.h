#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeEvaluatorBase.h"
#include "Templates/SubclassOf.h"
#include "RebelHLTreeBlueprintEvaluatorWrapper.generated.h"

class URebelHLTreeEvaluatorBlueprintBase;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeBlueprintEvaluatorWrapper : public FRebelHLTreeEvaluatorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelHLTreeEvaluatorBlueprintBase> EvaluatorClass;
    
    FRebelHLTreeBlueprintEvaluatorWrapper();
};

