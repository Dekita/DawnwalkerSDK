#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_Delay.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Delay : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    FRebelAIActionFragment_Delay();
};

