#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RWAmbientSound.generated.h"

class URWAudioComponent;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API ARWAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, meta=(AllowPrivateAccess=true))
    URWAudioComponent* RWAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool AutoPost;
    
    ARWAmbientSound(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSound();
    
};

