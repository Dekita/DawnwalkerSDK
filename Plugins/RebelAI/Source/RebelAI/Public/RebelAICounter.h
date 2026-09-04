#pragma once
#include "CoreMinimal.h"
#include "RebelAICounter.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAICounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawnCounterValue;
    
    FRebelAICounter();
};

