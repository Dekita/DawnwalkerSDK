#pragma once
#include "CoreMinimal.h"
#include "AudioDynamicCacheValue.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioDynamicCacheValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<uint32> PlayingIds;
    
    FAudioDynamicCacheValue();
};

