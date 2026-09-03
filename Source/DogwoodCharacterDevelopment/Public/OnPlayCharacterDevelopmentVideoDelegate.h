#pragma once
#include "CoreMinimal.h"
#include "OnPlayCharacterDevelopmentVideoDelegate.generated.h"

class UMediaSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayCharacterDevelopmentVideo, const UMediaSource*, MediaSource);

