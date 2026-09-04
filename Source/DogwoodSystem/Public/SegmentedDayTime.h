#pragma once
#include "CoreMinimal.h"
#include "SegmentedDayTime.generated.h"

USTRUCT(BlueprintType)
struct FSegmentedDayTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDay;
    
    DOGWOODSYSTEM_API FSegmentedDayTime();
};

