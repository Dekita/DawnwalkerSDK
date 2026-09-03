#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeSetCombatBlockedForPlayer.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetCombatBlockedForPlayer : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockCombat;
    
public:
    UQuestNodeSetCombatBlockedForPlayer();

};

