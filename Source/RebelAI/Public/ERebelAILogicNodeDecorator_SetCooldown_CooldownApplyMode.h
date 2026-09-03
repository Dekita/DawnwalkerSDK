#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNodeDecorator_SetCooldown_CooldownApplyMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNodeDecorator_SetCooldown_CooldownApplyMode : uint8 {
    None,
    OnPreBeginExecuteNode,
    OnPostEndExecuteNode,
    OnPostEndExecuteNode_IfSucceeded,
};

