#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNodeController.h"
#include "QuestNodePlayVideoWithTransition_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlayVideoWithTransition_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestNodePlayVideoWithTransition_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnStartPostProcessBlendingOut(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void OnEndPostProcessBlendingOut(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted();
    
};

