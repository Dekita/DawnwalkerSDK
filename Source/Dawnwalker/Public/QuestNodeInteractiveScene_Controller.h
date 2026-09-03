#pragma once
#include "CoreMinimal.h"
#include "EFadeState.h"
#include "QuestNodeController.h"
#include "QuestNodeInteractiveScene_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeInteractiveScene_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestNodeInteractiveScene_Controller();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompletedInteractiveScene();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelledInteractiveScene();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraFadeStateChange(EFadeState PreviousFadeState, EFadeState NextFadeState);
    
};

