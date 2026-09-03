#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAnimAsset.h"
#include "RebelLocomotionBlendSpaceAsset.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionBlendSpaceAsset : public FRebelLocomotionAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace;
    
    FRebelLocomotionBlendSpaceAsset();
};

