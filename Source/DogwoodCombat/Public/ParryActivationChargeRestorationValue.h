#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "ParryActivationChargeRestorationValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FParryActivationChargeRestorationValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FParryActivationChargeRestorationValue();
};

