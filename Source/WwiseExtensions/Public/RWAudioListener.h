#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RWAudioListener.generated.h"

class URWAudioComponent;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API ARWAudioListener : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ListenerTransform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URWAudioComponent* ListenerComponent;
    
public:
    ARWAudioListener(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetListenerDampingTime(const float DampingTimeInS);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetCameraToPlayerPosition(const float NewPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FTransform GetListenerTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FVector GetListenerLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FVector GetListenerDampenedLocation();
    
};

