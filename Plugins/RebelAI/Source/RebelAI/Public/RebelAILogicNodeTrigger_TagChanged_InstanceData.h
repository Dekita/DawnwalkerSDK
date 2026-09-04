#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_InstanceData.h"
#include "RebelAILogicNodeTrigger_TagChanged_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeTrigger_TagChanged_InstanceData : public FRebelAILogicNode_InstanceData {
    GENERATED_BODY()
public:
    FRebelAILogicNodeTrigger_TagChanged_InstanceData();
};

