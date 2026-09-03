#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionDrinkBloodType_Controller.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionDrinkBloodType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionDrinkBloodType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnConditionTriggered(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBloodDrinkingInProgressChanged(const AActor* InActor);
    
};

