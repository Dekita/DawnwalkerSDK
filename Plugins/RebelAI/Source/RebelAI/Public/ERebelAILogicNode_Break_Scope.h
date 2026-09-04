#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Break_Scope.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNode_Break_Scope : uint8 {
    Default,
    Scope,
    Behavior,
    Coroutine,
    Inject,
};

