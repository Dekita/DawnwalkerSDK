#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "QuestNodeController.h"
#include "QuestConditionItemReceivedType_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionItemReceivedType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionItemReceivedType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnItemAdded(const FItemHandle& ItemHandle, int32 AddedQuantity);
    
};

