#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeFatigueCharacter.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeFatigueCharacter : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
public:
    UQuestNodeFatigueCharacter();

};

