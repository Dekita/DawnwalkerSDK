#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeTestActorReference.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeTestActorReference : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
public:
    UQuestNodeTestActorReference();

};

