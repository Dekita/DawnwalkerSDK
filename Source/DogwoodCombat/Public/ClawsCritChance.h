#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "ClawsCritChance.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FClawsCritChance : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FClawsCritChance();
};

