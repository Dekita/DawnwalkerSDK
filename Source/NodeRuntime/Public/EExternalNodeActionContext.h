#pragma once
#include "CoreMinimal.h"
#include "EExternalNodeActionContext.generated.h"

UENUM(BlueprintType)
enum class EExternalNodeActionContext : uint8 {
    ENAC_All,
    ENAC_UserSkipable,
};

