#pragma once
#include "CoreMinimal.h"
#include "ExcludablePostDialogueAction.h"
#include "TeleportToActionPointPostDialogueAction.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FTeleportToActionPointPostDialogueAction : public FExcludablePostDialogueAction {
    GENERATED_BODY()
public:
    FTeleportToActionPointPostDialogueAction();
};

