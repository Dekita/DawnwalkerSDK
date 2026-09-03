#pragma once
#include "CoreMinimal.h"
#include "EHubOperationType.generated.h"

UENUM(BlueprintType)
enum class EHubOperationType : uint8 {
    EnableTabs,
    LockTabs,
    EnableAllTabsExcept,
    LockAllTabsExcept,
};

