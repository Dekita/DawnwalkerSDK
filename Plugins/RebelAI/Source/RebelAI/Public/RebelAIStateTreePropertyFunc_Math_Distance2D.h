#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionBase.h"
#include "RebelAIStateTreePropertyFunc_Math_Distance2D.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_Math_Distance2D : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreePropertyFunc_Math_Distance2D();
};

