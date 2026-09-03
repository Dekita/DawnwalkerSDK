#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "ECameraFadeDirection.h"
#include "QuestNodeFadeCamera.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeFadeCamera : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraFadeDirection FadeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFadeAudio;
    
public:
    UQuestNodeFadeCamera();

};

