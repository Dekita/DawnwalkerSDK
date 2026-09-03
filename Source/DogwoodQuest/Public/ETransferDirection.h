#pragma once
#include "CoreMinimal.h"
#include "ETransferDirection.generated.h"

UENUM(BlueprintType)
enum class ETransferDirection : uint8 {
    PlayerToStorage,
    StorageToPlayer,
};

