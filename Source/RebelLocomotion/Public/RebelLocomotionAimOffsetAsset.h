#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionConditionAsset.h"
#include "RebelLocomotionAimOffsetAsset.generated.h"

class UAimOffsetBlendSpace;

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionAimOffsetAsset : public FRebelLocomotionConditionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* AimOffset;
    
    FRebelLocomotionAimOffsetAsset();
};

