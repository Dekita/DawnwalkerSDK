#pragma once
#include "CoreMinimal.h"
#include "StaminaCostValue.h"
#include "VampireSwordAttackStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct FVampireSwordAttackStaminaCostValue : public FStaminaCostValue {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FVampireSwordAttackStaminaCostValue();
};

