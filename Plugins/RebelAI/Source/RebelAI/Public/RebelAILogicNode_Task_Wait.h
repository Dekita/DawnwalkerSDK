#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Task_Wait.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_Wait : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Task_Wait();
};

