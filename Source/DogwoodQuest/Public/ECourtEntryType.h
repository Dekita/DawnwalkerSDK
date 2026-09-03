#pragma once
#include "CoreMinimal.h"
#include "ECourtEntryType.generated.h"

UENUM(BlueprintType)
enum class ECourtEntryType : uint8 {
    None,
    Compound,
    MultipleActivity,
    SubEntry,
};

