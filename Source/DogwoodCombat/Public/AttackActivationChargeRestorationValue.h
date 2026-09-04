#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "AttackActivationChargeRestorationValue.generated.h"

USTRUCT(BlueprintType)
struct FAttackActivationChargeRestorationValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FAttackActivationChargeRestorationValue();
};

