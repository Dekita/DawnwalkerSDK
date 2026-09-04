#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogueNodeBase.h"
#include "FlowNode_SetSpeakerVisible.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_SetSpeakerVisible : public UDialogueNodeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
public:
    UFlowNode_SetSpeakerVisible();

};

