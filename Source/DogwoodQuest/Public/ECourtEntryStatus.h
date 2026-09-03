#pragma once
#include "CoreMinimal.h"
#include "ECourtEntryStatus.generated.h"

UENUM(BlueprintType)
enum class ECourtEntryStatus : uint8 {
    Hidden,
    Revealed,
    Resolved,
};

