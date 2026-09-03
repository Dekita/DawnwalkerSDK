#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionEscapeFromCombatType_Controller.generated.h"

class UNPCCombatComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionEscapeFromCombatType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNPCCombatComponent>> BoundCombatComponents;
    
public:
    UQuestConditionEscapeFromCombatType_Controller();

    UFUNCTION(BlueprintCallable)
    void OnEscapedFromNPC();
    
};

