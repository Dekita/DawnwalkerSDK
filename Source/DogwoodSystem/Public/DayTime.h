#pragma once
#include "CoreMinimal.h"
#include "DayTime.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FDayTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Minute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Second;
    
    FDayTime();
};

