#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "Engine/DataAsset.h"
#include "RebelRotationDuringRootMotionConfig.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelRotationDuringRootMotionConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs BlendOut;
    
    URebelRotationDuringRootMotionConfig();

};

