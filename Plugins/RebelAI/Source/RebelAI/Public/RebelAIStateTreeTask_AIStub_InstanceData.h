#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    FRebelAIStateTreeTask_AIStub_InstanceData();
};

