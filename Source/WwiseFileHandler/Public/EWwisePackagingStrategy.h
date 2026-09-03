#pragma once
#include "CoreMinimal.h"
#include "EWwisePackagingStrategy.generated.h"

UENUM(BlueprintType)
enum class EWwisePackagingStrategy : uint8 {
    Source,
    AdditionalFile,
    HybridAdditionalFile,
    BulkData,
    External,
};

