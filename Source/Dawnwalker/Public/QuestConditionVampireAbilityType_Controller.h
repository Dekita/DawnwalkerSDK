#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionVampireAbilityType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionVampireAbilityType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionVampireAbilityType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnAntiGravWalkingActivated();
    
};

