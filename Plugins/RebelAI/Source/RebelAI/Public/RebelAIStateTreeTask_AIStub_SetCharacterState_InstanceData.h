#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_AIStub_SetCharacterState_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_SetCharacterState_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_AIStub_SetCharacterState_InstanceData();
};

