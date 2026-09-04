#pragma once
#include "CoreMinimal.h"
#include "EFlowOnScreenMessageType.generated.h"

UENUM(BlueprintType)
enum class EFlowOnScreenMessageType : uint8 {
    Temporary,
    Permanent,
};

