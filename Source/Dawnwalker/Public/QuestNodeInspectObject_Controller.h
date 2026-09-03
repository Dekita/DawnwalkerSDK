#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeInspectObject_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeInspectObject_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestNodeInspectObject_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnInspectedSpot(const FName& SpotName);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedInspection();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelledInspection();
    
};

