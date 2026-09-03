#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Task_DespawnIfSummoned.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_DespawnIfSummoned : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnTime;
    
    FRebelAILogicNode_Task_DespawnIfSummoned();
};

