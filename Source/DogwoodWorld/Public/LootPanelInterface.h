#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LootPanelSettings.h"
#include "LootPanelInterface.generated.h"

class UInventoryComponent;

UINTERFACE(Blueprintable)
class DOGWOODWORLD_API ULootPanelInterface : public UInterface {
    GENERATED_BODY()
};

class ILootPanelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupLootingPanel(UInventoryComponent* InventoryComponent, const FLootPanelSettings& InSettings);
    
};

