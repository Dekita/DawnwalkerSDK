#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyRef.h"
#include "RebelAINodeHandle.h"
#include "RebelAIStateTreeTask_LogicTree_InstanceData.h"
#include "RebelAIStateTreeCondition_LogicTree_ConditionalFindNode_InstanceData.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_LogicTree_ConditionalFindNode_InstanceData : public FRebelAIStateTreeTask_LogicTree_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* NodeType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef NodeHandleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAINodeHandle NodeHandle;
    
    FRebelAIStateTreeCondition_LogicTree_ConditionalFindNode_InstanceData();
};

