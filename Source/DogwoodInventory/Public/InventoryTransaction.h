#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "InventoryTransaction.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FInventoryTransaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FItemHandle, int32> DownstreamItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FItemHandle, int32> UpstreamItems;
    
    FInventoryTransaction();
};

