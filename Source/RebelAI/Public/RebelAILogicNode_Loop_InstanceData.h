#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_InstanceData.h"
#include "RebelAILogicNode_Loop_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Loop_InstanceData : public FRebelAILogicNode_InstanceData {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Loop_InstanceData();
};

