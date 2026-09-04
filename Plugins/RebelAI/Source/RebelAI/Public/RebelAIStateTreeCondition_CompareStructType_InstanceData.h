#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelAIStateTreeCondition_CompareStructType_InstanceData.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_CompareStructType_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* Right;
    
    FRebelAIStateTreeCondition_CompareStructType_InstanceData();
};

