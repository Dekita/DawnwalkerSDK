#pragma once
#include "CoreMinimal.h"
#include "StaminaCostValue.h"
#include "SwordAttackStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct FSwordAttackStaminaCostValue : public FStaminaCostValue {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FSwordAttackStaminaCostValue();
};

