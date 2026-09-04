#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeRandomTimeDuration.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeRandomTimeDuration {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 duration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 RandomVariance;
    
public:
    FRebelHLTreeRandomTimeDuration();
};

