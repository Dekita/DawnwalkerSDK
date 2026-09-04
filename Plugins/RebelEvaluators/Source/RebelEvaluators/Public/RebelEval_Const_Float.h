#pragma once
#include "CoreMinimal.h"
#include "RebelEval_Const.h"
#include "RebelEval_Const_Float.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval_Const_Float : public URebelEval_Const {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    URebelEval_Const_Float();

};

