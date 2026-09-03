#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeHealCharacter.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeHealCharacter : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
public:
    UQuestNodeHealCharacter();

};

