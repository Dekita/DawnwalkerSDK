#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerTraversalSweepTestLocation.h"
#include "DawnwalkerTraversalSweepTest.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalSweepTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerTraversalSweepTestLocation Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerTraversalSweepTestLocation End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpectedBlockingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedStartPenetration;
    
    FDawnwalkerTraversalSweepTest();
};

