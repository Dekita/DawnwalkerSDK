#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "FaceIdleOverlayLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FFaceIdleOverlayLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    FFaceIdleOverlayLineGenerationData();
};

