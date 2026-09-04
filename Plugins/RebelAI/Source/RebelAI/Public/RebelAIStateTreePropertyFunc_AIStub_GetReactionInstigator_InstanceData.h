#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreePropertyFunc_AIStub_GetReactionInstigator_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_GetReactionInstigator_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Result;
    
    FRebelAIStateTreePropertyFunc_AIStub_GetReactionInstigator_InstanceData();
};

