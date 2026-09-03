#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionNPCAttitudeType_Controller.generated.h"

class UNPCCombatComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionNPCAttitudeType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNPCCombatComponent>> BoundCombatComponents;
    
public:
    UQuestConditionNPCAttitudeType_Controller();

};

