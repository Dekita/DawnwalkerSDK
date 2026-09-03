#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeRemoveActor.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeRemoveActor : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
public:
    UQuestNodeRemoveActor();

};

