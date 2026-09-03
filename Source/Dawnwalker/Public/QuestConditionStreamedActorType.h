#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "QuestConditionStreamedActorType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionStreamedActorType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Condition;
    
public:
    UQuestConditionStreamedActorType();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetConditionNames() const;
    
};

