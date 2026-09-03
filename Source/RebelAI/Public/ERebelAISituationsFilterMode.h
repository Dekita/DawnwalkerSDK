#pragma once
#include "CoreMinimal.h"
#include "ERebelAISituationsFilterMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAISituationsFilterMode : uint8 {
    Default,
    Allow,
    Block,
    BlockAll,
};

