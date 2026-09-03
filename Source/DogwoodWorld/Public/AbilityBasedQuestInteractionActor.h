#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FocusAbilityTargetable.h"
#include "GameplayTagContainer.h"
#include "QuestInteractionActor.h"
#include "Templates/SubclassOf.h"
#include "AbilityBasedQuestInteractionActor.generated.h"

class UFocusAbilityBase;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AAbilityBasedQuestInteractionActor : public AQuestInteractionActor, public IFocusAbilityTargetable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFocusAbilityBase> ActivationAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityEffectTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EffectLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectDuration;
    
    AAbilityBasedQuestInteractionActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityInteractionStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyVfxSpawn();
    
    UFUNCTION(BlueprintCallable)
    FText GetInteractionPrompt() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetGameplayCueTag();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteInteraction();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsBossCharacter() const override PURE_VIRTUAL(IsBossCharacter, return false;);
    
};

