#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LootRegionRarityPool.h"
#include "LootRarityPool.generated.h"

USTRUCT(BlueprintType)
struct FLootRarityPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLootRegionRarityPool> RegionRarityPools;
    
    DOGWOODINVENTORY_API FLootRarityPool();
};

