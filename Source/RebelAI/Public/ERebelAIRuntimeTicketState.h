#pragma once
#include "CoreMinimal.h"
#include "ERebelAIRuntimeTicketState.generated.h"

UENUM(BlueprintType)
enum class ERebelAIRuntimeTicketState : uint8 {
    Unknown,
    Active,
    Inactive,
};

