#pragma once
#include "CoreMinimal.h"
#include "LootGenerationData.generated.h"

class ULootTableDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FLootGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootTableDataAsset* LootTable;
    
    FLootGenerationData();
};

