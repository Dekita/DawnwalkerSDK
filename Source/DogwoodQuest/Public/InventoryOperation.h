#pragma once
#include "CoreMinimal.h"
#include "EInventoryOperationType.h"
#include "InventoryOperation.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODQUEST_API FInventoryOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryOperationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkItemAsNew;
    
    FInventoryOperation();
};

