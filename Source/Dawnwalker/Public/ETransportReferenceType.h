#pragma once
#include "CoreMinimal.h"
#include "ETransportReferenceType.generated.h"

UENUM(BlueprintType)
enum class ETransportReferenceType : uint8 {
    Actor,
    Position,
};

