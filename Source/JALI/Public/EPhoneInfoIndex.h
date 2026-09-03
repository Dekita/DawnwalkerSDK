#pragma once
#include "CoreMinimal.h"
#include "EPhoneInfoIndex.generated.h"

UENUM(BlueprintType)
enum EPhoneInfoIndex {
    StartTime,
    EndTime,
    PhonemeValue = 21,
    PhonemePosInWord = 25,
    Word,
    Mask = 31,
    Heart,
};

