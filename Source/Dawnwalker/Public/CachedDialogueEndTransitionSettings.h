#pragma once
#include "CoreMinimal.h"
#include "CachedDialogueTransitionSettings.h"
#include "CachedDialogueEndTransitionSettings.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FCachedDialogueEndTransitionSettings : public FCachedDialogueTransitionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeFrameSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeFrame;
    
    FCachedDialogueEndTransitionSettings();
};

