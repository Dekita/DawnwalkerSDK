#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "MmcValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FMmcValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FMmcValue();
};

