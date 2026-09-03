#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EInventoryType.h"
#include "InventoryLevelProvider.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODINVENTORY_API UInventoryLevelProvider : public UInterface {
    GENERATED_BODY()
};

class IInventoryLevelProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRegionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLootBaseLevel(EInventoryType InventoryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInventoryLevel() const;
    
};

