#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HashableDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODQUEST_API FHashableDataTableRowHandle : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    FHashableDataTableRowHandle();
};

