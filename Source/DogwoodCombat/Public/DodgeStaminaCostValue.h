#pragma once
#include "CoreMinimal.h"
#include "MmcValue.h"
#include "DodgeStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct FDodgeStaminaCostValue : public FMmcValue {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FDodgeStaminaCostValue();
};

