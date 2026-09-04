#pragma once
#include "CoreMinimal.h"
#include "RebelEval.h"
#include "RebelEval_Compare.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval_Compare : public URebelEval {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelEval* Arg1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelEval* Arg2;
    
public:
    URebelEval_Compare();

};

