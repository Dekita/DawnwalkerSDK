#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionConditionAsset.h"
#include "RebelLocomotionMontageAsset.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionMontageAsset : public FRebelLocomotionConditionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FRebelLocomotionMontageAsset();
};

