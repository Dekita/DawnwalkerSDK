#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "FaceIdleOverlayLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FFaceIdleOverlayLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FFaceIdleOverlayLineGenerationData();
};

