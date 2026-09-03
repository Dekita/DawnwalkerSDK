#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodePutPlayerInCombatStance.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePutPlayerInCombatStance : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnarmedCombat;
    
    UQuestNodePutPlayerInCombatStance();

};

