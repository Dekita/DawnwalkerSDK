#pragma once
#include "CoreMinimal.h"
#include "RandomizedItem.h"
#include "LootTableItemConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FLootTableItemConfig : public FRandomizedItem {
    GENERATED_BODY()
public:
    FLootTableItemConfig();
};

