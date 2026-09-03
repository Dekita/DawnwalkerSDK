#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionGroundInfo.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionGroundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWalkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlideable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLedge;
    
    FRebelLocomotionGroundInfo();
};

