#pragma once
#include "CoreMinimal.h"
#include "ECommunityObjectSelectionPolicy.generated.h"

UENUM(BlueprintType)
enum class ECommunityObjectSelectionPolicy : uint8 {
    Random,
    NearestUnused,
    None,
    Route,
    Crowd,
    Default = Random,
};

