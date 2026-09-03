#pragma once
#include "CoreMinimal.h"
#include "RebelEval_Const.h"
#include "RebelEval_Const_Int.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval_Const_Int : public URebelEval_Const {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    URebelEval_Const_Int();

};

