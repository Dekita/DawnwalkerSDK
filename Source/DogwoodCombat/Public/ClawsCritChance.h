#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "ClawsCritChance.generated.h"

USTRUCT(BlueprintType)
struct FClawsCritChance : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FClawsCritChance();
};

