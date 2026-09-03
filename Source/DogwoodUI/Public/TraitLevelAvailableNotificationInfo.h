#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "TraitLevelAvailableNotificationInfo.generated.h"

class UTraitAsset;

UCLASS(Blueprintable)
class DOGWOODUI_API UTraitLevelAvailableNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraitAsset* Trait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlocked;
    
    UTraitLevelAvailableNotificationInfo();

};

