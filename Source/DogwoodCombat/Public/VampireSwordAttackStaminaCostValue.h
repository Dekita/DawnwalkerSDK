#pragma once
#include "CoreMinimal.h"
#include "StaminaCostValue.h"
#include "VampireSwordAttackStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FVampireSwordAttackStaminaCostValue : public FStaminaCostValue {
    GENERATED_BODY()
public:
    FVampireSwordAttackStaminaCostValue();
};

