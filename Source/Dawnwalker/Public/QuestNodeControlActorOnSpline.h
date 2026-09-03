#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeControlActorOnSpline.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeControlActorOnSpline : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference SplinePathRef;
    
public:
    UQuestNodeControlActorOnSpline();

};

