#pragma once
#include "CoreMinimal.h"
#include "OpenWorldFocusAbility.h"
#include "PermanentBuffProvider.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AgeOfHeroesActivationAbility.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAnimMontage;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UAgeOfHeroesActivationAbility : public UOpenWorldFocusAbility, public IPermanentBuffProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AbilityMontageSwordEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> InCombatAbilityMontageSword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> InCombatAbilityMontagePlank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AbilityMontageHandToHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRestoreHandToHand;
    
    UAgeOfHeroesActivationAbility();

    UFUNCTION(BlueprintCallable)
    void PlayAbilityMontage(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnVfxSpawn();
    
    UFUNCTION()
    void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnMontageNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnInteractionExecute();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    float GetBuffMultiplier(UAbilitySystemComponent* OwnerASC) const override PURE_VIRTUAL(GetBuffMultiplier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetBuffFactCounterAttributeValue(UAbilitySystemComponent* OwnerASC) const override PURE_VIRTUAL(GetBuffFactCounterAttributeValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FText GetBuffDescription(UAbilitySystemComponent* OwnerASC) override PURE_VIRTUAL(GetBuffDescription, return FText::GetEmpty(););
    
};

