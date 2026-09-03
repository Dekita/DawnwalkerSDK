#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAnimAsset.h"
#include "RebelLocomotionAnimSequenceAsset.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionAnimSequenceAsset : public FRebelLocomotionAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> AnimationVariations;
    
    FRebelLocomotionAnimSequenceAsset();
};

