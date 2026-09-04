#pragma once
#include "CoreMinimal.h"
#include "WalkInAnimationName.h"
#include "WalkOutAnimationName.h"
#include "SpeakerWalkAnimation.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FSpeakerWalkAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWalkInAnimationName WalkIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWalkOutAnimationName WalkOut;
    
    FSpeakerWalkAnimation();
};

