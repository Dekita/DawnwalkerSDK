#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_AIStub_InstanceData.h"
#include "RebelAIStateTreeCondition_HasCooldown_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_HasCooldown_InstanceData : public FRebelAIStateTreeCondition_AIStub_InstanceData {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition_HasCooldown_InstanceData();
};

