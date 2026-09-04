#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams.h"
#include "RebelAIParams_Wait.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Wait : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    FRebelAIParams_Wait();
};

