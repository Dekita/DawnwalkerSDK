#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionBase.h"
#include "RebelAIStateTreePropertyFunc_GetTime.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_GetTime : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreePropertyFunc_GetTime();
};

