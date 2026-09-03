#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeNotifyEdictEnacted.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeNotifyEdictEnacted : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggeredEdict;
    
    UQuestNodeNotifyEdictEnacted();

};

