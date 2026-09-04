#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RebelAudioPersistencyComponent.generated.h"

class UAkAudioEvent;
class URWAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELAUDIO_API URebelAudioPersistencyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
public:
    URebelAudioPersistencyComponent(const FObjectInitializer& ObjectInitializer);

};

