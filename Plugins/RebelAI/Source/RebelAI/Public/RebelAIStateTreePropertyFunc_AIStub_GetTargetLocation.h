#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionBase.h"
#include "RebelAIStateTreePropertyFunc_AIStub_GetTargetLocation.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_GetTargetLocation : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreePropertyFunc_AIStub_GetTargetLocation();
};

