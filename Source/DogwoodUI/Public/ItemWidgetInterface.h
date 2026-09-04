#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemHandle.h"
#include "ItemWidgetInterface.generated.h"

class UInventoryComponent;
class UWidget;

UINTERFACE(Blueprintable)
class UItemWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IItemWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItem(UInventoryComponent* TargetInventory, const FItemHandle& InItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItem(UInventoryComponent* TargetInventory, const FItemHandle& InItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetUWidget();
    
};

