#pragma once
#include "CoreMinimal.h"
#include "SaveGameScreenshotResultMCDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveGameScreenshotResultMCDelegate, UTexture2D*, Result);

