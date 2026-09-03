#pragma once
#include "CoreMinimal.h"
#include "EJaliFrequencies.generated.h"

UENUM(BlueprintType)
enum class EJaliFrequencies : uint8 {
    None = 0,
    Incessant = 10,
    VeryOften = 25,
    Often = 50,
    Common = 75,
    Default = 100,
    Occasional = 125,
    Rare = 150,
    VeryRare = 200,
};

