#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ListenerPair.h"
#include "TrackedAudioComponent.h"
#include "RWVoiceManager.generated.h"

class UAkAuxBus;
class URWAcoustics;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API URWVoiceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URWAcoustics* RWAcoustics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UAkAuxBus*> SurfaceMaterialsMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, FTrackedAudioComponent> TrackedAudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FListenerPair GameListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FListenerPair EditorListener;
    
public:
    URWVoiceManager();

    UFUNCTION(BlueprintCallable)
    void OnEndFrame();
    
};

