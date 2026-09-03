#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnGlossaryEntryUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGlossaryEntryUnlocked, const FGameplayTag&, EntryTag, bool, IsUpdated, bool, bSilent);

