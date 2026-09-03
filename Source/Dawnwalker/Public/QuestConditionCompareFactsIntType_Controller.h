#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNodeController.h"
#include "QuestConditionCompareFactsIntType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionCompareFactsIntType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionCompareFactsIntType_Controller();

    UFUNCTION(BlueprintCallable)
    void ObservedFactChanged(FGameplayTag& FactName, bool BoolValue, int32 IntValue, float FloatValue);
    
};

