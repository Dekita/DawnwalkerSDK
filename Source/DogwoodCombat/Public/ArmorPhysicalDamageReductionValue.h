#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "ArmorPhysicalDamageReductionValue.generated.h"

USTRUCT(BlueprintType)
struct FArmorPhysicalDamageReductionValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FArmorPhysicalDamageReductionValue();
};

