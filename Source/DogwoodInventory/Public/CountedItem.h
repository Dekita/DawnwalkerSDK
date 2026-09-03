#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "CountedItem.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FCountedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FCountedItem();
};

