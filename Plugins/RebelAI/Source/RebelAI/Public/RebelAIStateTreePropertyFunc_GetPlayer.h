#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionBase.h"
#include "RebelAIStateTreePropertyFunc_GetPlayer.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_GetPlayer : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreePropertyFunc_GetPlayer();
};

