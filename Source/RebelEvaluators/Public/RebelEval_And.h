#pragma once
#include "CoreMinimal.h"
#include "RebelEval.h"
#include "RebelEval_And.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval_And : public URebelEval {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URebelEval*> Args;
    
public:
    URebelEval_And();

};

