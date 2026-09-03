#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionCharacterFinishedDialoguesType_Controller.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionCharacterFinishedDialoguesType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionCharacterFinishedDialoguesType_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnGameplayDialogueFinished(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished(UCinematicDialogue* Dialogue, bool bKeepDialogueState);
    
};

