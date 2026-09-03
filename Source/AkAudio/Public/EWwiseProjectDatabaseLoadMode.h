#pragma once
#include "CoreMinimal.h"
#include "EWwiseProjectDatabaseLoadMode.generated.h"

UENUM(BlueprintType)
enum class EWwiseProjectDatabaseLoadMode : uint8 {
    Synchronous,
    Asynchronous,
};

