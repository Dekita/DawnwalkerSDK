#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DWPromptQuery.h"
#include "SprintAbility.generated.h"

class ADawnwalkerCharacterBase;
class UAbilityTask_WaitAttributeChangeThreshold;
class UAbilityTask_WaitGameplayTagQuery;
class UAbilityTask_WaitGameplayTagRemoved;
class UCombatComponentBase;
class URebelCharacterMovementProfile;

UCLASS(Blueprintable)
class DAWNWALKER_API USprintAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* SprintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalForbiddenTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySprintCostEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDWPromptQuery> PromptsArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationBlockedAllTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ActivationBlockedQuery;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle SprintCostEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitGameplayTagRemoved* TagRemovedTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitAttributeChangeThreshold* StaminaTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitGameplayTagQuery* BlockTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ProfileHandle;
    
public:
    USprintAbility();

    UFUNCTION(BlueprintCallable)
    void ShowPrompt(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaChanged(bool MatchesComparison, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnCrouch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    URebelCharacterMovementProfile* GetSprintProfile() const;
    
};

