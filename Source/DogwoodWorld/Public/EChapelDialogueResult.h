#pragma once
#include "CoreMinimal.h"
#include "EChapelDialogueResult.generated.h"

UENUM(BlueprintType)
enum class EChapelDialogueResult : uint8 {
    None,
    FastTravel,
    SkillUpgrade,
    Storage,
    TimeSkip,
};

