#pragma once
#include "CoreMinimal.h"
#include "StaminaCostValue.h"
#include "ClawsAttackStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FClawsAttackStaminaCostValue : public FStaminaCostValue {
    GENERATED_BODY()
public:
    FClawsAttackStaminaCostValue();
};

