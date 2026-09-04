#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeCustomEventsForActor.generated.h"

UCLASS(Blueprintable)
class UQuestNodeCustomEventsForActor : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndEvent;
    
public:
    UQuestNodeCustomEventsForActor();

};

