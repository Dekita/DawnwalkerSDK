#pragma once
#include "CoreMinimal.h"
#include "EQuestCurrencyTransactionType.generated.h"

UENUM(BlueprintType)
enum class EQuestCurrencyTransactionType : uint8 {
    None,
    VerySmall,
    Small,
    Medium,
    Large,
    VeryLarge,
    Huge,
    Custom,
};

