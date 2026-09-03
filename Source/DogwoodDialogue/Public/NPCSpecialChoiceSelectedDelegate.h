#pragma once
#include "CoreMinimal.h"
#include "NPCSpecialChoiceSelectedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCSpecialChoiceSelected, const AActor*, NPC);

