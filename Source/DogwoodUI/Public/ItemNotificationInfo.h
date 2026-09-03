#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "NotificationInfo.h"
#include "ItemNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UItemNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemHandle TargetItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowInventoryPrompt: 1;
    
    UItemNotificationInfo();

};

