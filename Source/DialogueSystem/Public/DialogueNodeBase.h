#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "DialogueNodeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API UDialogueNodeBase : public UFlowNode {
    GENERATED_BODY()
public:
    UDialogueNodeBase();

};

