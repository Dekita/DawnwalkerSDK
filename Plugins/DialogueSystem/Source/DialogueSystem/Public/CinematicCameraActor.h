#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "CinematicCameraActor.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API ACinematicCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    ACinematicCameraActor(const FObjectInitializer& ObjectInitializer);

};

