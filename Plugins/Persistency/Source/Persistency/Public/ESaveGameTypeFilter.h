#pragma once
#include "CoreMinimal.h"
#include "ESaveGameTypeFilter.generated.h"

UENUM(BlueprintType)
enum class ESaveGameTypeFilter : uint8 {
    All,
    AllExceptDebug,
    ManualOnly,
    QuicksaveOnly,
};

