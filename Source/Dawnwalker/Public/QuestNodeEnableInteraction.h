#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeEnableInteraction.generated.h"

UCLASS(Blueprintable)
class UQuestNodeEnableInteraction : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    UQuestNodeEnableInteraction();

};

