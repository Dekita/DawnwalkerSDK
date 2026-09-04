#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreePropertyFunc_AIStub_GetCurrentAssignment_InstanceData.generated.h"

class ACommunityObject;
class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_GetCurrentAssignment_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACommunityObject* Result;
    
    FRebelAIStateTreePropertyFunc_AIStub_GetCurrentAssignment_InstanceData();
};

