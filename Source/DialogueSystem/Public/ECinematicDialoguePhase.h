#pragma once
#include "CoreMinimal.h"
#include "ECinematicDialoguePhase.generated.h"

UENUM(BlueprintType)
enum class ECinematicDialoguePhase : uint8 {
    None,
    Starting,
    ExecutingGraph,
    Finishing,
};

