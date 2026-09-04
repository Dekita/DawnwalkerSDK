#pragma once
#include "CoreMinimal.h"
#include "RebelEval.h"
#include "RebelEval_Not.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval_Not : public URebelEval {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelEval* Arg;
    
public:
    URebelEval_Not();

};

