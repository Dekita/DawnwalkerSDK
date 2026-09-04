#pragma once
#include "CoreMinimal.h"
#include "EDialogueSubSequenceLock.generated.h"

UENUM(BlueprintType)
enum class EDialogueSubSequenceLock : uint8 {
    Start,
    End,
    None,
};

