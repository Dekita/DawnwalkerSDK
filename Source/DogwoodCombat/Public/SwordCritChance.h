#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "SwordCritChance.generated.h"

USTRUCT(BlueprintType)
struct FSwordCritChance : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FSwordCritChance();
};

