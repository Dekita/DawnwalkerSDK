#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreePropertyRef.h"
#include "RebelAIStateTreeTask_SetVectorRef_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetVectorRef_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef Property;
    
    FRebelAIStateTreeTask_SetVectorRef_InstanceData();
};

