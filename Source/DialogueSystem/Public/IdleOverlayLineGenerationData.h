#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "IdleOverlayLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FIdleOverlayLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    FIdleOverlayLineGenerationData();
};

