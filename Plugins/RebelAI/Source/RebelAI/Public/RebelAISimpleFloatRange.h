#pragma once
#include "CoreMinimal.h"
#include "RebelAISimpleFloatRange.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAISimpleFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max;
    
    FRebelAISimpleFloatRange();
};

