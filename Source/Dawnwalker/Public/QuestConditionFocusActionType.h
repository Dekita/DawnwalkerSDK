#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EFocusActionConditionType.h"
#include "Templates/SubclassOf.h"
#include "QuestConditionFocusActionType.generated.h"

class AActor;
class UFocusAbilityBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionFocusActionType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusActionConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFocusAbilityBase>> AllowedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullyCharged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargedSlots;
    
public:
    UQuestConditionFocusActionType();

    UFUNCTION(BlueprintCallable)
    void OnReEvaluateCondition();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusTargetChanged(const AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusAction(const UFocusAbilityBase* InAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnConditionTriggered();
    
};

