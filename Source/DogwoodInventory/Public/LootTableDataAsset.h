#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LootTableLevelSetConfig.h"
#include "LootTableDataAsset.generated.h"

class ULootTableDataAsset;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API ULootTableDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootTableDataAsset* InheritLootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootTableLevelSetConfig> LootTableLevelSets;
    
    ULootTableDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLootTableLevelSetConfig GetLevelSet(const int32 InLevel, bool& bFound) const;
    
};

