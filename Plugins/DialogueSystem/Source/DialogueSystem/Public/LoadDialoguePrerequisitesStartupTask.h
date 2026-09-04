#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "LoadDialoguePrerequisitesStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API ULoadDialoguePrerequisitesStartupTask : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    ULoadDialoguePrerequisitesStartupTask();

};

