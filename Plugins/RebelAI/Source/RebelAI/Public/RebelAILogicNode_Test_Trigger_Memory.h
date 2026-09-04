#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Trigger.h"
#include "RebelAILogicNode_Test_Trigger_Memory.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Test_Trigger_Memory : public FRebelAILogicNode_Trigger {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Test_Trigger_Memory();
};

