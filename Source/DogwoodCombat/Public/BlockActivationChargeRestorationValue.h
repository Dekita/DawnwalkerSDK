#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "BlockActivationChargeRestorationValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FBlockActivationChargeRestorationValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FBlockActivationChargeRestorationValue();
};

