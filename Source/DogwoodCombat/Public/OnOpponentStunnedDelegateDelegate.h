#pragma once
#include "CoreMinimal.h"
#include "OnOpponentStunnedDelegateDelegate.generated.h"

class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOpponentStunnedDelegate, UCombatComponentBase*, LoadedSet);

