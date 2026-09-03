#pragma once
#include "CoreMinimal.h"
#include "RebelTableRowHandle.h"
#include "StaminaCostsTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FStaminaCostsTableRowHandle : public FRebelTableRowHandle {
    GENERATED_BODY()
public:
    FStaminaCostsTableRowHandle();
};

