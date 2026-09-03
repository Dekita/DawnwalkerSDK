#pragma once
#include "CoreMinimal.h"
#include "NotificationWidgetDelegateDelegate.generated.h"

class UNotificationWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotificationWidgetDelegate, UNotificationWidget*, Widget);

