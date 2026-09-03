#pragma once
#include "CoreMinimal.h"
#include "JaliRuntimeAnimSettings.h"
#include "JaliRuntimeAnimLoaderOnCompletedDelegate.generated.h"

class USoundWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJaliRuntimeAnimLoaderOnCompleted, USoundWave*, SoundWave, FJaliRuntimeAnimSettings, AnimSettings);

