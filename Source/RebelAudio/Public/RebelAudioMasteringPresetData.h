#pragma once
#include "CoreMinimal.h"
#include "RebelAudioMasteringPresetData.generated.h"

class UAkEffectShareSet;
class UAkStateValue;

USTRUCT(BlueprintType)
struct REBELAUDIO_API FRebelAudioMasteringPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkEffectShareSet> MasteringPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> MasteringState;
    
    FRebelAudioMasteringPresetData();
};

