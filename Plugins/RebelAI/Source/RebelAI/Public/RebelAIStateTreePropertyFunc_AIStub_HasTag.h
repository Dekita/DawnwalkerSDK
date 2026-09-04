#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionBase.h"
#include "RebelAIStateTreePropertyFunc_AIStub_HasTag.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_HasTag : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreePropertyFunc_AIStub_HasTag();
};

