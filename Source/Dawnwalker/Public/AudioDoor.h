#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioDoor.generated.h"

class UAkAudioEvent;
class UAkPortalComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioDoor : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkPortalComponent* DoorPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorClosedTransmission;
    
public:
    UAudioDoor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDoorStartedOpening(bool WasSystemicallyOpened) const;
    
    UFUNCTION(BlueprintCallable)
    void OnDoorStartedClosing(bool WasSystemicallyClosed) const;
    
    UFUNCTION(BlueprintCallable)
    void OnDoorOpenAmountChanged(float Value);
    
};

