#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HashableDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FHashableDataTableRowHandle : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    DOGWOODQUEST_API FHashableDataTableRowHandle();
};

