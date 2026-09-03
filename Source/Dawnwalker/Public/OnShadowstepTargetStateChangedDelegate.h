#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDawnwalkerShadowstepTargetState.h"
#include "OnShadowstepTargetStateChangedDelegate.generated.h"

class ADawnwalkerCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnShadowstepTargetStateChanged, EDawnwalkerShadowstepTargetState, State, const FVector&, Location, const FVector&, Normal, const ADawnwalkerCharacterBase*, SnapBehindCharacter);

