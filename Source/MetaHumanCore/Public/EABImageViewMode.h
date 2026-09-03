#pragma once
#include "CoreMinimal.h"
#include "EABImageViewMode.generated.h"

UENUM()
enum class EABImageViewMode : int32 {
    A,
    B,
    ABSplit,
    ABSide,
    Current,
    Any,
};

