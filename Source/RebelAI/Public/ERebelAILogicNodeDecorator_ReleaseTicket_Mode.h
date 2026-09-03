#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNodeDecorator_ReleaseTicket_Mode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNodeDecorator_ReleaseTicket_Mode : uint8 {
    OnPreBeginExecuteNode,
    OnPostEndExecuteNode,
};

