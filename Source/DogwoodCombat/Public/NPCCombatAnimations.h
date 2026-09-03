#pragma once
#include "CoreMinimal.h"
#include "CombatAnimations.h"
#include "NPCCombatAnimations.generated.h"

class UNPCAttacks;
class UTauntAnimationSet;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UNPCCombatAnimations : public UCombatAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCAttacks* Attacks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTauntAnimationSet* TauntAnimations;
    
public:
    UNPCCombatAnimations();

};

