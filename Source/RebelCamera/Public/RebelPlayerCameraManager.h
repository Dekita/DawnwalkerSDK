#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "RebelPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class REBELCAMERA_API ARebelPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ARebelPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

