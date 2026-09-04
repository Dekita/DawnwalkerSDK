#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RebelAudioMusicSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELAUDIO_API URebelAudioMusicSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URebelAudioMusicSubsystem();

};

