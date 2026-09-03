#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionDialoguePlaybackStartedType_Controller.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionDialoguePlaybackStartedType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionDialoguePlaybackStartedType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnGameplayDialoguePlaybackStarted(UCinematicDialogue* InDialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackStarted(UCinematicDialogue* InDialogue, bool bWasStateKept);
    
};

