#pragma once
#include "CoreMinimal.h"
#include "EActiveAbilitiesFunctionalityType.h"
#include "QuestNode.h"
#include "EActiveAbilitiesPanelOperationType.h"
#include "QuestNodeActiveAbilitiesPanelManager.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeActiveAbilitiesPanelManager : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActiveAbilitiesPanelOperationType OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActiveAbilitiesFunctionalityType> ActiveAbilitiesFunctionalityTypes;
    
public:
    UQuestNodeActiveAbilitiesPanelManager();

};

