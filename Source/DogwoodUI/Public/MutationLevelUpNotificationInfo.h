#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "MutationLevelUpNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UMutationLevelUpNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnblockedTraits;
    
    UMutationLevelUpNotificationInfo();

};

