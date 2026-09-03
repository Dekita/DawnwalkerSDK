#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerAIStateTreePropertyFunc_AIStub_GetRestrictedAreaReactionTime_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIStateTreePropertyFunc_AIStub_GetRestrictedAreaReactionTime_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FDawnwalkerAIStateTreePropertyFunc_AIStub_GetRestrictedAreaReactionTime_InstanceData();
};

