#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShakeBase.h"
#include "CinematicCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API UCinematicCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UCinematicCameraShake(const FObjectInitializer& ObjectInitializer);

};

