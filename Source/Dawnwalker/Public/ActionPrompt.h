#pragma once
#include "CoreMinimal.h"
#include "ActionPrompt.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FActionPrompt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirectionMask;
    
    FActionPrompt();
};

