#pragma once
#include "CoreMinimal.h"
#include "ERebelCrowdStubState.generated.h"

UENUM(BlueprintType)
enum class ERebelCrowdStubState : uint8 {
    Unknown,
    Pending,
    WaitForAssignment,
    WaitForPawn,
    InitPawn,
    PawnUnhide,
    Active,
    WaitForUnregister,
};

