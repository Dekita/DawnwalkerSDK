#pragma once
#include "CoreMinimal.h"
#include "PostDialogueAction.h"
#include "OptionalPostDialogueAction.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FOptionalPostDialogueAction : public FPostDialogueAction {
    GENERATED_BODY()
public:
    FOptionalPostDialogueAction();
};

