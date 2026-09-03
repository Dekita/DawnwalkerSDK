#pragma once
#include "CoreMinimal.h"
#include "ESaveGameStage.generated.h"

UENUM(BlueprintType)
enum class ESaveGameStage : uint8 {
    Idle,
    Preparing,
    ReadyToSave,
    AsyncSaving,
    DoneSaving,
    CleaningUp,
    PreLoading,
    Loading,
    PostLoading,
    DoneLoading,
};

