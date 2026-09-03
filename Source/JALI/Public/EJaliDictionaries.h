#pragma once
#include "CoreMinimal.h"
#include "EJaliDictionaries.generated.h"

UENUM(BlueprintType)
enum class EJaliDictionaries : uint8 {
    CMU,
    Apple,
    SAMPA,
    XSAMPA,
    IPA,
    Polly,
    Festival,
    Azure = 9,
    Resemble,
    Kaldi,
};

