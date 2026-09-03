#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "FaceIdleLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FFaceIdleLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    FFaceIdleLineGenerationData();
};

