#pragma once
#include "CoreMinimal.h"
#include "EBiomesPCGLimit.generated.h"

UENUM()
enum class EBiomesPCGLimit : int32 {
    CreateAll,
    AllowList,
    BlockList,
};

