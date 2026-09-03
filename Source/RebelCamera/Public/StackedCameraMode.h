#pragma once
#include "CoreMinimal.h"
#include "RebelCameraModeHandle.h"
#include "StackedCameraMode.generated.h"

class URebelCameraMode;

USTRUCT(BlueprintType)
struct REBELCAMERA_API FStackedCameraMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelCameraModeHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCameraMode* CameraMode;
    
    FStackedCameraMode();
};

