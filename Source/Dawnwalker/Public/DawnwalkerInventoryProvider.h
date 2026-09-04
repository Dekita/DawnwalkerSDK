#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DawnwalkerInventoryProvider.generated.h"

class UInventoryComponent;

UINTERFACE(Blueprintable)
class UDawnwalkerInventoryProvider : public UInterface {
    GENERATED_BODY()
};

class IDawnwalkerInventoryProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInventoryComponent* GetInventoryComponentInterface();
    
};

