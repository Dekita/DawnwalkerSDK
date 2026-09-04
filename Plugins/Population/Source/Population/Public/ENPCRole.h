#pragma once
#include "CoreMinimal.h"
#include "ENPCRole.generated.h"

UENUM(BlueprintType)
enum class ENPCRole : uint8 {
    Filler_NoSave,
    Crowd_NoSave,
    Scene_PartialSave,
    Encounter_PartialSave,
    Quest_FullSave,
    Follower_FullSave,
};

