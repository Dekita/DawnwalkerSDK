#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreePropertyFunc_GetTime_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_GetTime_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRebelAIStateTreePropertyFunc_GetTime_InstanceData();
};

