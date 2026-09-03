#pragma once
#include "CoreMinimal.h"
#include "EInventoryTransactionResult.generated.h"

UENUM(BlueprintType)
enum class EInventoryTransactionResult : uint8 {
    Success,
    NotEnoughCurrencyDownstream,
    NotEnoughCurrencyUpstream,
};

