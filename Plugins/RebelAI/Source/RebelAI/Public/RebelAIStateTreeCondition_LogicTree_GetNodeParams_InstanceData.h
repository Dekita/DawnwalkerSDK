#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelAILogicTree_ExecutionContextHandle.h"
#include "RebelAINodeHandle.h"
#include "RebelAIStateTreeTask_LogicTree_InstanceData.h"
#include "RebelAIStateTreeCondition_LogicTree_GetNodeParams_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_LogicTree_GetNodeParams_InstanceData : public FRebelAIStateTreeTask_LogicTree_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAINodeHandle NodeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAILogicTree_ExecutionContextHandle ExecutionContextHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct NodeParams;
    
    FRebelAIStateTreeCondition_LogicTree_GetNodeParams_InstanceData();
};

