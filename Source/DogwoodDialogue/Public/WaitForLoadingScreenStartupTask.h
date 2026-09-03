#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "WaitForLoadingScreenStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODDIALOGUE_API UWaitForLoadingScreenStartupTask : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    UWaitForLoadingScreenStartupTask();

};

