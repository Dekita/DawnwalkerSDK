#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeSetActorState.generated.h"

class UActorState;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetActorState : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorState*> StateToApply;
    
public:
    UQuestNodeSetActorState();

};

