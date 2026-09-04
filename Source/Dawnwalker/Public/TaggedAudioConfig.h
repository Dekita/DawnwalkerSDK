#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedAudioConfig.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FTaggedAudioConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationAudioTag;
    
    DAWNWALKER_API FTaggedAudioConfig();
};

