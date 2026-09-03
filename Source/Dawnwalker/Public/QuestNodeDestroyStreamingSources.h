#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeDestroyStreamingSources.generated.h"

UCLASS(Blueprintable, Config=Game)
class DAWNWALKER_API UQuestNodeDestroyStreamingSources : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetRef;
    
public:
    UQuestNodeDestroyStreamingSources();

};

