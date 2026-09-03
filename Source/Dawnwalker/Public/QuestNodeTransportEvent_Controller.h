#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeTransportEvent_Controller.generated.h"

class ADawnwalkerTransportActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeTransportEvent_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerTransportActor* ObservedTransport;
    
public:
    UQuestNodeTransportEvent_Controller();

};

