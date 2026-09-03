#pragma once
#include "CoreMinimal.h"
#include "TriggerHUDSubtitleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTriggerHUDSubtitle, const FText&, Subtitle, const float, TimeToFade);

