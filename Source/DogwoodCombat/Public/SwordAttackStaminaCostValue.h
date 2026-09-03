#pragma once
#include "CoreMinimal.h"
#include "StaminaCostValue.h"
#include "SwordAttackStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FSwordAttackStaminaCostValue : public FStaminaCostValue {
    GENERATED_BODY()
public:
    FSwordAttackStaminaCostValue();
};

