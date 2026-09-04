#pragma once
#include "CoreMinimal.h"
#include "DismembermentBox.h"
#include "EWeaponAnimationType.h"
#include "Templates/SubclassOf.h"
#include "StunAttackData.generated.h"

class UAnimMontage;
class UCombatAnimationConfig;
class UCombatAnimations;

USTRUCT(BlueprintType)
struct FStunAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InstigatorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TargetMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAnimationType, UCombatAnimations*> NewTargetCombatAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAnimationType, TSubclassOf<UCombatAnimationConfig>> NewCombatAnimationConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnDismemberedLimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDismembermentBox DismembermentBox;
    
    DOGWOODCOMBAT_API FStunAttackData();
};

