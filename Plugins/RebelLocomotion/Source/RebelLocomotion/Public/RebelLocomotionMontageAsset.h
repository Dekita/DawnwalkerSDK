#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionConditionAsset.h"
#include "RebelLocomotionMontageAsset.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FRebelLocomotionMontageAsset : public FRebelLocomotionConditionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    REBELLOCOMOTION_API FRebelLocomotionMontageAsset();
};

