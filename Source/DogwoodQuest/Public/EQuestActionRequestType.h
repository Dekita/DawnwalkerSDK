#pragma once
#include "CoreMinimal.h"
#include "EQuestActionRequestType.generated.h"

UENUM(BlueprintType)
enum class EQuestActionRequestType : uint8 {
    PlayVideo,
    ShowTutorialWindow,
    PlayDialogue,
    ShowReadableWindow,
};

