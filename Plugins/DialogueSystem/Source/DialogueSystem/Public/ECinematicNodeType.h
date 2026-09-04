#pragma once
#include "CoreMinimal.h"
#include "ECinematicNodeType.generated.h"

UENUM(BlueprintType)
enum class ECinematicNodeType : uint8 {
    Choice,
    Response,
};

