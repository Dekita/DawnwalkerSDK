#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodePlayVideo_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlayVideo_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestNodePlayVideo_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted();
    
};

