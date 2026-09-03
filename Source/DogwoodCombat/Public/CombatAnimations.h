#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "CombatAnimations.generated.h"

class UAnimInstance;
class UAnimMontage;
class UAttackAnimationSet;
class UCombatReactionAnimationSet;
class UDodgeAnimationSet;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UCombatAnimations : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatReactionAnimationSet* ReactionAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDodgeAnimationSet* DodgeAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackAnimationSet* AttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReturnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimLayers;
    
public:
    UCombatAnimations();

};

