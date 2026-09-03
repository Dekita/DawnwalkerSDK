#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeEnableOneLinerInteraction.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeEnableOneLinerInteraction : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOneLinerInteraction;
    
public:
    UQuestNodeEnableOneLinerInteraction();

};

