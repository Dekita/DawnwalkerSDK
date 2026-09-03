#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "AttackActivationChargeRestorationValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FAttackActivationChargeRestorationValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FAttackActivationChargeRestorationValue();
};

