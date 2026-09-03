#pragma once
#include "CoreMinimal.h"
#include "EAkCurveInterpolation.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeSfxManager.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSfxManager : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SfxToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenAttachedToDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCurveInterpolation StopCurveInterpolation;
    
public:
    UQuestNodeSfxManager();

};

