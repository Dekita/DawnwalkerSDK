#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryTile.generated.h"

class UInventoryUIListItem;

UINTERFACE(Blueprintable)
class UInventoryTile : public UInterface {
    GENERATED_BODY()
};

class IInventoryTile : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UInventoryUIListItem* GetBoundListItem();
    
};

