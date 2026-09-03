#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AttackData.h"
#include "CombatNotifyData.h"
#include "ESpecialAttackType.h"
#include "EWeaponSwingDirection.h"
#include "SpecialAttackReactionList.h"
#include "CombatReactionAnimationSet.generated.h"

class UAnimMontage;
class UBlockAnimationSet;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UCombatReactionAnimationSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, UAnimMontage*> BlockReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, UAnimMontage*> ParryReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialAttackType, FSpecialAttackReactionList> SpecialAttackReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StunMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSwingDirection, UAnimMontage*> KnockdownHitReactions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlockAnimationSet* BlockAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlockAnimationSet* ParryAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlockAnimationSet* HitAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlockAnimationSet* BlockReactionsAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlockAnimationSet* ParryReactionsAnimationSet;
    
public:
    UCombatReactionAnimationSet();

    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetParryReaction(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetParryAnimation(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData);
    
    UFUNCTION(BlueprintCallable)
    EWeaponSwingDirection GetMirroredReaction(EWeaponSwingDirection ActionDirection);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetHitAnimation(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetBlockReaction(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetBlockAnimation(FGameplayTagContainer& Tags, FCombatNotifyData InAnimData, FAttackData InAttackData);
    
};

