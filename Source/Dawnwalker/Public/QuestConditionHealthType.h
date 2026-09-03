#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "EConditionCheckType.h"
#include "EConditionTestType.h"
#include "QuestConditionHealthType.generated.h"

class ADawnwalkerCharacterBase;
class UFocusAbilityBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionHealthType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionTestType TestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsoluteValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedDuringFocusAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> ObservedCharacter;
    
public:
    UQuestConditionHealthType();

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetHealthChanged(float NewValue, float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusAbilityFinished(UFocusAbilityBase* CombatFocusAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnDied();
    
};

