#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNodeDecorator_Counter_CounterApplyMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNodeDecorator_Counter_CounterApplyMode : uint8 {
    None,
    OnPreBeginExecuteNode,
    OnPostEndExecuteNode,
    OnPostEndExecuteNode_IfSucceeded,
};

