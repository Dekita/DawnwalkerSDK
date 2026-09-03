#pragma once
#include "CoreMinimal.h"
#include "EQuestExperienceRewardAmount.generated.h"

UENUM(BlueprintType)
enum class EQuestExperienceRewardAmount : uint8 {
    None,
    VerySmall,
    Small,
    Medium,
    Large,
    VeryLarge,
    AdditionalSmall,
    AdditionalMedium,
    AdditionalLarge,
    Vista,
    InspectionSmall,
    InspectionMedium,
    InspectionLarge,
    NanoPoiSmall,
    NanoPoiMedium,
    NanoPoiLarge,
    DemoHandsOff2025Start,
};

