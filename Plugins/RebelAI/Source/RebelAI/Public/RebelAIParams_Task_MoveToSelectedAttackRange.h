#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams_Task.h"
#include "RebelAIParams_Task_MoveToSelectedAttackRange.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Task_MoveToSelectedAttackRange : public FRebelAIParams_Task {
    GENERATED_BODY()
public:
    FRebelAIParams_Task_MoveToSelectedAttackRange();
};

