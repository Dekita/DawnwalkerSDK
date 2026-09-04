#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Task_DebugLogWithFrame.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_DebugLogWithFrame : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FRebelAILogicNode_Task_DebugLogWithFrame();
};

