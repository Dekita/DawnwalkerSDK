#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_AIStub_InstanceData.h"
#include "RebelAIStateTreeCondition_AIStub_IsInGuardArea_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_AIStub_IsInGuardArea_InstanceData : public FRebelAIStateTreeCondition_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Target;
    
    FRebelAIStateTreeCondition_AIStub_IsInGuardArea_InstanceData();
};

