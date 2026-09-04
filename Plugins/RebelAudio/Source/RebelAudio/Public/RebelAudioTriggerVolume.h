#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "RebelAudioTriggerVolume.generated.h"

UCLASS(Blueprintable)
class ARebelAudioTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    ARebelAudioTriggerVolume(const FObjectInitializer& ObjectInitializer);

};

