#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "IdleOverlayLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FIdleOverlayLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FIdleOverlayLineGenerationData();
};

