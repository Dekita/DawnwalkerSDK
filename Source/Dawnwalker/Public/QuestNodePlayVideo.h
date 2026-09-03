#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "Widgets/Layout/SScaleBox.h"
#include "QuestNodePlayVideo.generated.h"

class UMediaSource;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlayVideo : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> Stretch;
    
public:
    UQuestNodePlayVideo();

};

