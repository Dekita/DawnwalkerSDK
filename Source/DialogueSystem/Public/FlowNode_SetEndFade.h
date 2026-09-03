#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "FlowNode_SetEndFade.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_SetEndFade : public UDialogueNodeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformFadeOutOnEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformFadeInOnEnd: 1;
    
public:
    UFlowNode_SetEndFade();

};

