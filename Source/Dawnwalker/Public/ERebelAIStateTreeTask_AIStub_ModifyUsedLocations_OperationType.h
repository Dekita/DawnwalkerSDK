#pragma once
#include "CoreMinimal.h"
#include "ERebelAIStateTreeTask_AIStub_ModifyUsedLocations_OperationType.generated.h"

UENUM(BlueprintType)
enum class ERebelAIStateTreeTask_AIStub_ModifyUsedLocations_OperationType : uint8 {
    Add,
    Remove,
};

