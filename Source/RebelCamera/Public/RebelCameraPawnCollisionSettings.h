#pragma once
#include "CoreMinimal.h"
#include "RebelCameraPawnCollisionSettings.generated.h"

USTRUCT(BlueprintType)
struct REBELCAMERA_API FRebelCameraPawnCollisionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideSpeed;
    
    FRebelCameraPawnCollisionSettings();
};

