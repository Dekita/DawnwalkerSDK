#pragma once
#include "CoreMinimal.h"
#include "NodePin.generated.h"

USTRUCT(BlueprintType)
struct NODERUNTIME_API FNodePin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FNodePin();
};

