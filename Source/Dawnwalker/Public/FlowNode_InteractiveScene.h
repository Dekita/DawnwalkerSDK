#pragma once
#include "CoreMinimal.h"
#include "DialogueLevelSequenceNodeBase.h"
#include "ActorReference.h"
#include "FlowNode_InteractiveScene.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UFlowNode_InteractiveScene : public UDialogueLevelSequenceNodeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ObjectToInspectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyEndedInteractiveScene;
    
public:
    UFlowNode_InteractiveScene();

    UFUNCTION(BlueprintCallable)
    void OnFinishedInteractiveScene();
    
};

