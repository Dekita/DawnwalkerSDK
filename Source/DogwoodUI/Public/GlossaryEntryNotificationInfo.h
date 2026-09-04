#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NotificationInfo.h"
#include "GlossaryEntryNotificationInfo.generated.h"

UCLASS(Blueprintable)
class UGlossaryEntryNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUpdated;
    
    UGlossaryEntryNotificationInfo();

};

