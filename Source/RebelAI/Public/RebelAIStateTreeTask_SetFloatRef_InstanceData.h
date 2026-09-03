#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyRef.h"
#include "RebelAIStateTreeTask_SetFloatRef_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetFloatRef_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef Property;
    
    FRebelAIStateTreeTask_SetFloatRef_InstanceData();
};

