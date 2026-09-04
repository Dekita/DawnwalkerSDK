#pragma once
#include "CoreMinimal.h"
#include "RebelCameraModeMapping.h"
#include "Templates/SubclassOf.h"
#include "RebelCameraModeSelector.generated.h"

class URebelCameraMode;

USTRUCT(BlueprintType)
struct REBELCAMERA_API FRebelCameraModeSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelCameraMode> DefaultMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelCameraModeMapping> Modes;
    
    FRebelCameraModeSelector();
};

