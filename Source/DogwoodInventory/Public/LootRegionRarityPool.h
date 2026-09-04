#pragma once
#include "CoreMinimal.h"
#include "LootRaritySetting.h"
#include "LootRegionRarityPool.generated.h"

USTRUCT(BlueprintType)
struct FLootRegionRarityPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootRaritySetting> RaritySettings;
    
    DOGWOODINVENTORY_API FLootRegionRarityPool();
};

