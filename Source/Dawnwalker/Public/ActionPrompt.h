#pragma once
#include "CoreMinimal.h"
#include "ActionPrompt.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FActionPrompt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirectionMask;
    
    DAWNWALKER_API FActionPrompt();
};

