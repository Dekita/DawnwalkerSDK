#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionCinematicType_Controller.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionCinematicType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionCinematicType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnGameplayDialogueStarted(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayDialogueFinished(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState);
    
};

