#pragma once
#include "CoreMinimal.h"
#include "RebelAINodeHandle.h"
#include "RebelAIStateTreeCondition_LogicTree_InstanceData.h"
#include "RebelAIStateTreeCondition_LogicTree_CompareNodeType_InstanceData.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_LogicTree_CompareNodeType_InstanceData : public FRebelAIStateTreeCondition_LogicTree_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAINodeHandle Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* Right;
    
    FRebelAIStateTreeCondition_LogicTree_CompareNodeType_InstanceData();
};

