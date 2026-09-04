#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "OptionalDialogueStartupTaskBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API UOptionalDialogueStartupTaskBase : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    UOptionalDialogueStartupTaskBase();

};

