#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioNPCInitializationData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioNPCInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCSoundTag;
    
    FAudioNPCInitializationData();
};

