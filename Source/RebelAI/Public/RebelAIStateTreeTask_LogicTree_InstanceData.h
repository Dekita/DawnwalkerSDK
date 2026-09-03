#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_LogicTree_InstanceData.generated.h"

class URebelAILogicTree_ServiceProxy;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_LogicTree_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAILogicTree_ServiceProxy* LTService;
    
    FRebelAIStateTreeTask_LogicTree_InstanceData();
};

