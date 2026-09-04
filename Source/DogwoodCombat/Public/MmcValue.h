#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "MmcValue.generated.h"

USTRUCT(BlueprintType)
struct FMmcValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FMmcValue();
};

