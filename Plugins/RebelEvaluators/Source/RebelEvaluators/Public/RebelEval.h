#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelEval.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class REBELEVALUATORS_API URebelEval : public UObject {
    GENERATED_BODY()
public:
    URebelEval();

};

