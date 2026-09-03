#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAnimSet.h"
#include "RebelLocomotionMontageAsset.h"
#include "RebelLocomotionMontageSet.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionMontageSet : public URebelLocomotionAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionMontageAsset> Assets;
    
    URebelLocomotionMontageSet();

};

