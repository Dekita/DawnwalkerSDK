#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "QuestConditionHostileActionType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionHostileActionType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrinkBloodAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeathFromAboveAction;
    
public:
    UQuestConditionHostileActionType();

};

