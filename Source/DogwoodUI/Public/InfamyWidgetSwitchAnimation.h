#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyWidgetSwitchAnimation.generated.h"

USTRUCT(BlueprintType)
struct FInfamyWidgetSwitchAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FInfamyWidgetSwitchAnimation();
};

