#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeEndCredits.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeEndCredits : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
    UQuestNodeEndCredits();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCreditsEnded();
    
};

