#pragma once
#include "CoreMinimal.h"
#include "RebelAIBlueprintReference.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_AIStub_ExecuteAbility_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_ExecuteAbility_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBlueprintReference AbilityReference;
    
    FRebelAIStateTreeTask_AIStub_ExecuteAbility_InstanceData();
};

