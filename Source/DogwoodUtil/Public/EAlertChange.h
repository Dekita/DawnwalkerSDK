#pragma once
#include "CoreMinimal.h"
#include "EAlertChange.generated.h"

UENUM(BlueprintType)
enum class EAlertChange : uint8 {
    ToMinimum,
    BigMinus,
    MediumMinus,
    SmallMinus,
    Plus1,
    Plus2,
    Plus3,
    Plus4,
    Plus5,
    Plus6,
    Plus7,
    Plus8,
    Plus9,
    Plus10,
    Plus11,
    Plus12,
    ToMaximum,
};

