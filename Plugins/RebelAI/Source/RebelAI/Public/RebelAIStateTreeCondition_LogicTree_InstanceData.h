#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_AIStub_InstanceData.h"
#include "RebelAIStateTreeCondition_LogicTree_InstanceData.generated.h"

class URebelAILogicTree_ServiceProxy;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_LogicTree_InstanceData : public FRebelAIStateTreeCondition_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAILogicTree_ServiceProxy* LTService;
    
    FRebelAIStateTreeCondition_LogicTree_InstanceData();
};

