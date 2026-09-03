#pragma once
#include "CoreMinimal.h"
#include "RebelEval.h"
#include "RebelEval_Distance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval_Distance : public URebelEval {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelEval* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelEval* Target;
    
public:
    URebelEval_Distance();

};

