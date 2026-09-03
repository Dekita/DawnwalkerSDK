#pragma once
#include "CoreMinimal.h"
#include "MmcValue.h"
#include "StaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FStaminaCostValue : public FMmcValue {
    GENERATED_BODY()
public:
    FStaminaCostValue();
};

