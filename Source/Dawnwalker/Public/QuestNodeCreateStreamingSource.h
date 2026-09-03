#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeCreateStreamingSource.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeCreateStreamingSource : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetRef;
    
public:
    UQuestNodeCreateStreamingSource();

};

