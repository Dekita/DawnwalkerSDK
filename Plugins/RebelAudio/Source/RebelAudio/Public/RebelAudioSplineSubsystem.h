#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelAudioSplineSubsystem.generated.h"

UCLASS(Blueprintable)
class URebelAudioSplineSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    URebelAudioSplineSubsystem();

};

