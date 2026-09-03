#pragma once
#include "CoreMinimal.h"
#include "EJaliAuMixMethod.generated.h"

UENUM(BlueprintType)
enum class EJaliAuMixMethod : uint8 {
    Maximum,
    Average,
    Additive,
    Minimum,
};

