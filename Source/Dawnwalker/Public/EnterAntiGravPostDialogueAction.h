#pragma once
#include "CoreMinimal.h"
#include "OptionalPostDialogueAction.h"
#include "EnterAntiGravPostDialogueAction.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FEnterAntiGravPostDialogueAction : public FOptionalPostDialogueAction {
    GENERATED_BODY()
public:
    FEnterAntiGravPostDialogueAction();
};

