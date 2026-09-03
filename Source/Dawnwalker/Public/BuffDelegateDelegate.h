#pragma once
#include "CoreMinimal.h"
#include "CharacterBuff.h"
#include "BuffDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuffDelegate, const FCharacterBuff&, Buff);

