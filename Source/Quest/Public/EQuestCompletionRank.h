#pragma once
#include "CoreMinimal.h"
#include "EQuestCompletionRank.generated.h"

UENUM(BlueprintType)
enum class EQuestCompletionRank : uint8 {
    None,
    Partial,
    Normal,
    Exceptional,
};

