#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "SingleObjectiveRow.h"
#include "QuestNodeObjectiveBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UQuestNodeObjectiveBase : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleObjectiveRow Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNotification;
    
public:
    UQuestNodeObjectiveBase();

};

