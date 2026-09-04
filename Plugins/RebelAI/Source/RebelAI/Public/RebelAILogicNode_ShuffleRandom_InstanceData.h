#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_InstanceData.h"
#include "RebelAILogicNode_ShuffleRandom_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_ShuffleRandom_InstanceData : public FRebelAILogicNode_InstanceData {
    GENERATED_BODY()
public:
    FRebelAILogicNode_ShuffleRandom_InstanceData();
};

