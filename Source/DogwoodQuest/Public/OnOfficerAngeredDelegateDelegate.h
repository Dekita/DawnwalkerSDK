#pragma once
#include "CoreMinimal.h"
#include "AlertLevelChangeInfo.h"
#include "OnOfficerAngeredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOfficerAngeredDelegate, FAlertLevelChangeInfo, Change);

