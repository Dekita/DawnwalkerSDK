#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "BlockActivationChargeRestorationValue.generated.h"

USTRUCT(BlueprintType)
struct FBlockActivationChargeRestorationValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FBlockActivationChargeRestorationValue();
};

