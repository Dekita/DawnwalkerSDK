#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task_BlueprintBased_InstanceData.generated.h"

class URebelAILogicNode_Task_BlueprintBase;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_BlueprintBased_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelAILogicNode_Task_BlueprintBase* BlueprintInstance;
    
    FRebelAILogicNode_Task_BlueprintBased_InstanceData();
};

