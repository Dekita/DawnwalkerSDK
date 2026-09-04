#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EObjectiveState : uint8 {
    EOS_None,
    EOS_Active,
    EOS_Success,
    EOS_Failure,
};

