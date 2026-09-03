#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "EyeIdleLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FEyeIdleLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    FEyeIdleLineGenerationData();
};

