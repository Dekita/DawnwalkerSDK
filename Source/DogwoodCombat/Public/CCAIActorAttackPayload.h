#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttackData.h"
#include "CCAIActorAttackPayload.generated.h"

class AWeaponBase;
class URebelAIStub;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FCCAIActorAttackPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeaponBase* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackData AttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackType;
    
    FCCAIActorAttackPayload();
};

