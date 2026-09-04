#pragma once
#include "CoreMinimal.h"
#include "MmcValue.h"
#include "StaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct FStaminaCostValue : public FMmcValue {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FStaminaCostValue();
};

