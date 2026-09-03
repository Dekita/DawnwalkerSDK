#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_InstanceData.h"
#include "RebelAILogicNode_Behavior_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Behavior_InstanceData : public FRebelAILogicNode_InstanceData {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Behavior_InstanceData();
};

