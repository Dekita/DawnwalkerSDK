#pragma once
#include "CoreMinimal.h"
#include "ENodeGraphState.generated.h"

UENUM(BlueprintType)
enum class ENodeGraphState : uint8 {
    EQSS_None,
    EQSS_Opened,
    EQSS_Done,
    EQSS_Deactivated,
    EQSS_Reset,
    EQSS_CleanDeactivated,
};

