#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_Math.h"
#include "RebelAIStateTreeTask_SetFloatRef.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetFloatRef : public FRebelAIStateTreeTask_Math {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FRebelAIStateTreeTask_SetFloatRef();
};

