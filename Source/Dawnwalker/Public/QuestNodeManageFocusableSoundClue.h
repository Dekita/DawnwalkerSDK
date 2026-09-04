#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeManageFocusableSoundClue.generated.h"

UCLASS(Blueprintable)
class UQuestNodeManageFocusableSoundClue : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
public:
    UQuestNodeManageFocusableSoundClue();

};

