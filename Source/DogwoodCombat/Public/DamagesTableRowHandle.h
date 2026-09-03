#pragma once
#include "CoreMinimal.h"
#include "RebelTableRowHandle.h"
#include "DamagesTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDamagesTableRowHandle : public FRebelTableRowHandle {
    GENERATED_BODY()
public:
    FDamagesTableRowHandle();
};

