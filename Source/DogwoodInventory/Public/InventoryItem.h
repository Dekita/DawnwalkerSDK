#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* ItemDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    FInventoryItem();
};

