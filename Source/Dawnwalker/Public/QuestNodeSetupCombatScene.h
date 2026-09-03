#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestCombatSceneAssignment.h"
#include "QuestNodeSetupCombatScene.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetupCombatScene : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestCombatSceneAssignment> Assignments;
    
public:
    UQuestNodeSetupCombatScene();

};

