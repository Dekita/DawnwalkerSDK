#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeaponToWeaponKey.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FWeaponToWeaponKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackerWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefenderWeapon;
    
    FWeaponToWeaponKey();
};
FORCEINLINE uint32 GetTypeHash(const FWeaponToWeaponKey) { return 0; }

