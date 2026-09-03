#pragma once
#include "CoreMinimal.h"
#include "ValueTimerInterpolator.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct DOGWOODUTIL_API FValueTimerInterpolator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    FValueTimerInterpolator();
};

