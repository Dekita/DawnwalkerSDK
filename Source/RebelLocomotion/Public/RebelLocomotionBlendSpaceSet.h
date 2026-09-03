#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAnimSet.h"
#include "RebelLocomotionBlendSpaceAsset.h"
#include "RebelLocomotionBlendSpaceSet.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionBlendSpaceSet : public URebelLocomotionAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionBlendSpaceAsset> Assets;
    
    URebelLocomotionBlendSpaceSet();

};

