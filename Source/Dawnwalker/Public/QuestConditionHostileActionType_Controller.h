#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionHostileActionType_Controller.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionHostileActionType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionHostileActionType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnBloodDrinking(AActor* InActor);
    
};

