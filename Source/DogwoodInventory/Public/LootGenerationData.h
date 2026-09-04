#pragma once
#include "CoreMinimal.h"
#include "LootGenerationData.generated.h"

class ULootTableDataAsset;

USTRUCT(BlueprintType)
struct FLootGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootTableDataAsset* LootTable;
    
    DOGWOODINVENTORY_API FLootGenerationData();
};

