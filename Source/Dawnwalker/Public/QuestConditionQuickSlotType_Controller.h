#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionQuickSlotType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionQuickSlotType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionQuickSlotType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnQuickslotBound();
    
    UFUNCTION(BlueprintCallable)
    void OnQuickslotBindingActiveChanged(const bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnHudQuickslotsActiveChanged(const bool bActive, const bool bUserInput);
    
};

