#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "ArmorPhysicalDamageReductionValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FArmorPhysicalDamageReductionValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FArmorPhysicalDamageReductionValue();
};

