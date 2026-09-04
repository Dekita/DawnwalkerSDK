#pragma once
#include "CoreMinimal.h"
#include "ECinematicScope.generated.h"

UENUM(BlueprintType)
enum class ECinematicScope : uint8 {
    Graph,
    Node,
    Line,
};

