#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeForceLoseTarget.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UQuestNodeForceLoseTarget : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
public:
    UQuestNodeForceLoseTarget();

};

