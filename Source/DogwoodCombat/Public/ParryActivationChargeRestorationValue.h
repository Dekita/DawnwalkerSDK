#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "ParryActivationChargeRestorationValue.generated.h"

USTRUCT(BlueprintType)
struct FParryActivationChargeRestorationValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FParryActivationChargeRestorationValue();
};

