#pragma once
#include "CoreMinimal.h"
#include "StructUtils/PropertyBag.h"
#include "StateTreePropertyRef.h"
#include "RebelAIStateTreeTask_SetValueRef_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetValueRef_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef Property;
    
    FRebelAIStateTreeTask_SetValueRef_InstanceData();
};

