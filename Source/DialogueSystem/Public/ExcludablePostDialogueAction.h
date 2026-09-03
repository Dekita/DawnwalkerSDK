#pragma once
#include "CoreMinimal.h"
#include "PostDialogueAction.h"
#include "ExcludablePostDialogueAction.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FExcludablePostDialogueAction : public FPostDialogueAction {
    GENERATED_BODY()
public:
    FExcludablePostDialogueAction();
};

