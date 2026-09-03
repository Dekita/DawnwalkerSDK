#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "QuestNodeController.h"
#include "QuestConditionInventoryEmptyType_Controller.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionInventoryEmptyType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionInventoryEmptyType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

