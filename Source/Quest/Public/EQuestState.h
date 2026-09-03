#pragma once
#include "CoreMinimal.h"
#include "EQuestState.generated.h"

UENUM(BlueprintType)
enum class EQuestState : uint8 {
    EQS_Init,
    EQS_Active,
    EQS_Success,
    EQS_Failure,
};

