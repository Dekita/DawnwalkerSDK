#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECounterAttackType.h"
#include "NPCAttacks.generated.h"

class UCombatAttackPattern;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UNPCAttacks : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCombatAttackPattern*> AttackPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAttackPattern* LeftFlankAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAttackPattern* RightFlankAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECounterAttackType, UCombatAttackPattern*> CounterAttacks;
    
    UNPCAttacks();

};

