#pragma once
#include "CoreMinimal.h"
#include "EAkTransmissionOperation.generated.h"

UENUM()
enum class EAkTransmissionOperation : uint32 {
    Add,
    Multiply,
    Max,
};

