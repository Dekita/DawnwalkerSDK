#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelAIStateTreeTask_ConvertParams_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_ConvertParams_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct InParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct OutParams;
    
    FRebelAIStateTreeTask_ConvertParams_InstanceData();
};

