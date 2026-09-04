#pragma once
#include "CoreMinimal.h"
#include "EQBlueprintScriptState.generated.h"

UENUM(BlueprintType)
enum class EQBlueprintScriptState : uint8 {
    EQBS_None,
    EQBS_Success,
    EQBS_Failure,
    EQBS_Skipped,
};

