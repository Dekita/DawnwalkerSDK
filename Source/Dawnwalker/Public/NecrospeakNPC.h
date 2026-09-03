#pragma once
#include "CoreMinimal.h"
#include "ENecrospeakState.h"
#include "NecrospeakCharacterInterface.h"
#include "HumanoidNPCBase.h"
#include "NecrospeakNPC.generated.h"

class UAkAudioEvent;
class UNecrospeakConfig;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class DAWNWALKER_API ANecrospeakNPC : public AHumanoidNPCBase, public INecrospeakCharacterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNecrospeakConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NecrospeakVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedNecrospeakVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENecrospeakState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NecrospeakEnableSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NecrospeakDisableSFX;
    
    ANecrospeakNPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraComponent* SpawnNecrospeakVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNecrospeakEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNecrospeakDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredFocus();
    

    // Fix for true pure virtual functions not being implemented
};

