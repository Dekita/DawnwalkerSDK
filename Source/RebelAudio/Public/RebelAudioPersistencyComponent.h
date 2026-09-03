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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URWAudioComponent* AudioTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> PersistentAudioEvents;
    
public:
    URebelAudioPersistencyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PostPendingPersistentAudioData(URWAudioComponent* RWAudioTarget);
    
};

