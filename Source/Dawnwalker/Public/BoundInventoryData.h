#pragma once
#include "CoreMinimal.h"
#include "BoundInventoryData.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FBoundInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> InventoryComponent;
    
    DAWNWALKER_API FBoundInventoryData();
};

