#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AudioAnimationNotifyProcessingSubsystem.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioAnimationNotifyProcessingSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UAudioAnimationNotifyProcessingSubsystem();

};

