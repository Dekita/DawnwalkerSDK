#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionSpecialChoiceShownType_Controller.generated.h"

class UCinematicDialogue;
class UCinematicNode_Choice;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionSpecialChoiceShownType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionSpecialChoiceShownType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    void OnChoicesRevealed(UCinematicNode_Choice* ChoiceNode);
    
};

