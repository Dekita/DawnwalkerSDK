#pragma once
#include "CoreMinimal.h"
#include "BloodBarSegment.generated.h"

USTRUCT(BlueprintType)
struct FBloodBarSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodAmount;
    
    DOGWOODSTATS_API FBloodBarSegment();
};

