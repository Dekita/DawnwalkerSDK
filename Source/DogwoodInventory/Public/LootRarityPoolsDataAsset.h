#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "LootRarityPool.h"
#include "LootRarityPoolsDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API ULootRarityPoolsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLootRarityPool> Pools;
    
    ULootRarityPoolsDataAsset();

};

