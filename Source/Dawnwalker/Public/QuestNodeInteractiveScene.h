#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeInteractiveScene.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeInteractiveScene : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ObjectToInspectRef;
    
public:
    UQuestNodeInteractiveScene();

};

