#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_AIStub_SetupMovement_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_SetupMovement_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontDoAnything;
    
    FRebelAIStateTreeTask_AIStub_SetupMovement_InstanceData();
};

