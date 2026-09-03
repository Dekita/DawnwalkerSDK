#pragma once
#include "CoreMinimal.h"
#include "CreatureEntry.h"
#include "ECreatureCategoryType.h"
#include "Components/ActorComponent.h"
#include "OnBloodDrinkingStartedDelegate.h"
#include "OnBloodDrinkingStoppedDelegate.h"
#include "BloodDrinkableComponent.generated.h"

class ADawnwalkerCharacterBase;
class UAbilitySystemComponent;
class UBloodDrinkableAnims;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UBloodDrinkableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingStarted OnBloodDrinkingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingStopped OnBloodDrinkingStopped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreatureEntry CreatureEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBloodDrinkableAnims* Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OwnerAbilitySystemComponent;
    
public:
    UBloodDrinkableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryPlayReactionDialogue();
    
    UFUNCTION(BlueprintCallable)
    void PostKillingDrinking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCreatureEntry GetCreatureEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApplyDrinkingEffect(const ADawnwalkerCharacterBase* InTargetCharacter, ECreatureCategoryType Type) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDrinkingEffects(const ADawnwalkerCharacterBase* InTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDrinkingEffect(const ADawnwalkerCharacterBase* InTargetCharacter, ECreatureCategoryType Type);
    
};

