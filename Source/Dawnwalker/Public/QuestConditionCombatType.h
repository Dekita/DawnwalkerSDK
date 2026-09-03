#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ECombatConditionType.h"
#include "QuestConditionCombatType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionCombatType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombatConditionType PauseUntil;
    
public:
    UQuestConditionCombatType();

private:
    UFUNCTION(BlueprintCallable)
    void OnConditionTriggered();
    
};

