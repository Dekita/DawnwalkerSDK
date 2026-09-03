#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioNPCWhoosh.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioNPCWhoosh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> WhooshEvent;
    
    FAudioNPCWhoosh();
};

