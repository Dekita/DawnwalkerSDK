#pragma once
#include "CoreMinimal.h"
#include "MmcValue.h"
#include "BlockStaminaCostValue.generated.h"

USTRUCT(BlueprintType)
struct FBlockStaminaCostValue : public FMmcValue {
    GENERATED_BODY()
public:
    DOGWOODCOMBAT_API FBlockStaminaCostValue();
};

