#pragma once
#include "CoreMinimal.h"
#include "OnProjectileHitDelegateDelegate.generated.h"

class UActiveAbilityProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileHitDelegate, UActiveAbilityProjectile*, Projectile);

