#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_Math.h"
#include "RebelAIStateTreeTask_SetBoolRef.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetBoolRef : public FRebelAIStateTreeTask_Math {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    FRebelAIStateTreeTask_SetBoolRef();
};

