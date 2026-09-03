#pragma once
#include "CoreMinimal.h"
#include "EJaliRecognizerModels.generated.h"

UENUM()
enum class EJaliRecognizerModels : int8 {
    DoNotTranscribe = -1,
    Tiny = 0,
    Base,
    Small,
    Medium,
    Large,
};

