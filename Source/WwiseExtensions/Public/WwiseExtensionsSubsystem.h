#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "WwiseExtensionsSubsystem.generated.h"

class UGlobalAudioComponent;
class URWVoiceManager;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API UWwiseExtensionsSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URWVoiceManager* VoiceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGlobalAudioComponent* GlobalAudioComponent;
    
public:
    UWwiseExtensionsSubsystem();

};

