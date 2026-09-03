#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "EQuestTimeProgressionType.h"
#include "QuestConditionObserverType.h"
#include "QuestConditionTriggerType.generated.h"

class APawn;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionTriggerType : public UQuestConditionObserverType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TriggerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestTimeProgressionType TimeProgressionType;
    
public:
    UQuestConditionTriggerType();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerEvent(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetConditionNames() const;
    
};

