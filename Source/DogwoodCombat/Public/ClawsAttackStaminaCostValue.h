#pragma once
#include "CoreMinimal.h"
#include "StaminaCostValue.h"
#include "ClawsAttackStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct FClawsAttackStaminaCostValue : public FStaminaCostValue {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FClawsAttackStaminaCostValue();
};

