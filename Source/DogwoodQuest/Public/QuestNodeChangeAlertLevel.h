#pragma once
#include "CoreMinimal.h"
#include "EAlertChange.h"
#include "QuestNode.h"
#include "QuestNodeChangeAlertLevel.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeChangeAlertLevel : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertChange Change;
    
    UQuestNodeChangeAlertLevel();

};

