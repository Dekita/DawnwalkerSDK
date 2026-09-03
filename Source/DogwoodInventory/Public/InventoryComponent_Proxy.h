#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "InventoryComponent_Proxy.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODINVENTORY_API UInventoryComponent_Proxy : public UInventoryComponent {
    GENERATED_BODY()
public:
    UInventoryComponent_Proxy(const FObjectInitializer& ObjectInitializer);

};

