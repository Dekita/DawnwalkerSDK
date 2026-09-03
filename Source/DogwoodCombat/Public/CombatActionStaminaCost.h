#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatActionStaminaCost.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FCombatActionStaminaCost : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentStaminaCost;
    
    FCombatActionStaminaCost();
};

