#pragma once
#include "CoreMinimal.h"
#include "MmcValue.h"
#include "BlockStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FBlockStaminaCostValue : public FMmcValue {
    GENERATED_BODY()
public:
    FBlockStaminaCostValue();
};

