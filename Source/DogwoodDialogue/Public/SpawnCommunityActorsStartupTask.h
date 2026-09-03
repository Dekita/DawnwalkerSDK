#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "SpawnCommunityActorsStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODDIALOGUE_API USpawnCommunityActorsStartupTask : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    USpawnCommunityActorsStartupTask();

};

