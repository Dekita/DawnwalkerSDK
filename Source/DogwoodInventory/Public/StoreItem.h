#pragma once
#include "CoreMinimal.h"
#include "RandomizedItem.h"
#include "StoreItem.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FStoreItem : public FRandomizedItem {
    GENERATED_BODY()
public:
    FStoreItem();
};

