#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimationType.h"
#include "Templates/SubclassOf.h"
#include "FinisherAttackData.generated.h"

class UCombatAnimationConfig;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FFinisherAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAnimationType, TSubclassOf<UCombatAnimationConfig>> NewCombatAnimationConfigs;
    
    FFinisherAttackData();
};

