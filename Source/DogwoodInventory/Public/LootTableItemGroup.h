#pragma once
#include "CoreMinimal.h"
#include "LootTableItemConfig.h"
#include "RandomizedItemGroup.h"
#include "LootTableItemGroup.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FLootTableItemGroup : public FRandomizedItemGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootTableItemConfig> LootTableItems;
    
    FLootTableItemGroup();
};

