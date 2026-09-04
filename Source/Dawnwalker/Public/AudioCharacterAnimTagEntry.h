#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AudioCharacterAnimTagEntry.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FAudioCharacterAnimTagEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimNotifyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentSocket;
    
    FAudioCharacterAnimTagEntry();
};

