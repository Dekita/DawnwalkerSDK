#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "QuestNodeController.h"
#include "QuestSfxInstance.h"
#include "QuestNodeSfxManager_Controller.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSfxManager_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SfxTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestSfxInstance> SfxInstances;
    
public:
    UQuestNodeSfxManager_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnSfxEnded(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

