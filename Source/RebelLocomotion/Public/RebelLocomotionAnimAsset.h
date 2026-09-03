#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionConditionAsset.h"
#include "RebelLocomotionAnimAsset.generated.h"

class URebelLocomotionCurveMap;

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionAnimAsset : public FRebelLocomotionConditionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelLocomotionCurveMap* AnimCurves;
    
    FRebelLocomotionAnimAsset();
};

