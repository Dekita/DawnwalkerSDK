#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryListItemFilterHandler.generated.h"

class UItemBaseDataAsset;

UINTERFACE(Blueprintable)
class UInventoryListItemFilterHandler : public UInterface {
    GENERATED_BODY()
};

class IInventoryListItemFilterHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanShowItem(const UItemBaseDataAsset* Item);
    
};

