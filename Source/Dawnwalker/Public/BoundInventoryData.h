#pragma once
#include "CoreMinimal.h"
#include "BoundInventoryData.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FBoundInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> InventoryComponent;
    
    FBoundInventoryData();
};

