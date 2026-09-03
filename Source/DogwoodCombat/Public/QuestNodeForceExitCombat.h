#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeForceExitCombat.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UQuestNodeForceExitCombat : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
public:
    UQuestNodeForceExitCombat();

};

