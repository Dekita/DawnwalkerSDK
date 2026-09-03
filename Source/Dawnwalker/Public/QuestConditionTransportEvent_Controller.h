#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestNodeController.h"
#include "QuestConditionTransportEvent_Controller.generated.h"

class ADawnwalkerTransportActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionTransportEvent_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerTransportActor* ObservedTransport;
    
public:
    UQuestConditionTransportEvent_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnUnregisterEvent(FGuid ID);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisterEvent(FGuid ID, ADawnwalkerTransportActor* Transport);
    
    UFUNCTION(BlueprintCallable)
    void OnEvent();
    
};

