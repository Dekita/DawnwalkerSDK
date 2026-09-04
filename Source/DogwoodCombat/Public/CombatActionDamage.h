#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatActionDamage.generated.h"

USTRUCT(BlueprintType)
struct FCombatActionDamage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    DOGWOODCOMBAT_API FCombatActionDamage();
};

