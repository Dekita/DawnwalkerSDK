#pragma once
#include "CoreMinimal.h"
#include "MmcValue.h"
#include "DodgeStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDodgeStaminaCostValue : public FMmcValue {
    GENERATED_BODY()
public:
    FDodgeStaminaCostValue();
};

