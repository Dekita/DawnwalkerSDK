#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "ERuneState.h"
#include "QuestNodeWardManager.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UQuestNodeWardManager : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference WardActorReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuneState TargetState;
    
public:
    UQuestNodeWardManager();

};

