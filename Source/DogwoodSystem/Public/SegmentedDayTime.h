#pragma once
#include "CoreMinimal.h"
#include "SegmentedDayTime.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FSegmentedDayTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDay;
    
    FSegmentedDayTime();
};

