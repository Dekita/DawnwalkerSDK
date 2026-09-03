#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestNodeController.h"
#include "QuestConditionDialogueChoiceSelectedType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionDialogueChoiceSelectedType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionDialogueChoiceSelectedType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnChoiceSelected(FGuid ChoiceGuid, int32 ChoiceIndex, bool bWasForced);
    
};

