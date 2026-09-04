#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "FaceIdleLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FFaceIdleLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FFaceIdleLineGenerationData();
};

