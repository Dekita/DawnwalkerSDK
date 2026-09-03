#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EItemWeaponSubtype.h"
#include "InventorySystemGamemodeInterface.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODINVENTORY_API UInventorySystemGamemodeInterface : public UInterface {
    GENERATED_BODY()
};

class DOGWOODINVENTORY_API IInventorySystemGamemodeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLootingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPlayerWeaponAttackSpeed(EItemWeaponSubtype WeaponSubtype) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerLevelCap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerLevel() const;
    
};

