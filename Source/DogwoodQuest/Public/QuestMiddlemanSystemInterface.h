#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnTriggerNoticeStateUpdatedDelegate.h"
#include "QuestMiddlemanSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UQuestMiddlemanSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTriggerNoticeStateUpdated OnTriggerNoticeStateUpdated;
    
    UQuestMiddlemanSystemInterface();

    UFUNCTION(BlueprintCallable)
    void UpdateTriggerNotice();
    
};

