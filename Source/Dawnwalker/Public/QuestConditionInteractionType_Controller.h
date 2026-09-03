#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionInteractionType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionInteractionType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionInteractionType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnDied();
    
};

