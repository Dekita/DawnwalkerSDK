#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Filter_SmartRandom.h"
#include "DawnwalkerAILogicNode_Filter_BlockChance.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAILogicNode_Filter_BlockChance : public FRebelAILogicNode_Filter_SmartRandom {
    GENERATED_BODY()
public:
    FDawnwalkerAILogicNode_Filter_BlockChance();
};

