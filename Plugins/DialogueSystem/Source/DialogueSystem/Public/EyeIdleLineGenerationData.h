#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.h"
#include "EyeIdleLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FEyeIdleLineGenerationData : public FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FEyeIdleLineGenerationData();
};

