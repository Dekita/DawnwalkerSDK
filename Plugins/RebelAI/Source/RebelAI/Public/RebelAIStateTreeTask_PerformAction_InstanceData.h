#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionDesc.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_PerformAction_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_PerformAction_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIActionDesc ActionDesc;
    
    FRebelAIStateTreeTask_PerformAction_InstanceData();
};

