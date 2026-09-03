#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionFastTravelledType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionFastTravelledType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionFastTravelledType_Controller();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFastTravelled();
    
};

