#pragma once
#include "CoreMinimal.h"
#include "RandomizedItem.h"
#include "StoreItem.generated.h"

USTRUCT(BlueprintType)
struct FStoreItem : public FRandomizedItem {
    GENERATED_BODY()
public:
    DOGWOODINVENTORY_API FStoreItem();
};

