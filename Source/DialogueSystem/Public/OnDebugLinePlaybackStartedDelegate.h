#pragma once
#include "CoreMinimal.h"
#include "OnDebugLinePlaybackStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebugLinePlaybackStarted, const FText&, LineText);

