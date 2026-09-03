#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EObstructionComplexity.h"
#include "EReverbType.h"
#include "RWAudioComponentSettingsPreset.generated.h"

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API URWAudioComponentSettingsPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeVirtualised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRWObstructionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObstructionComplexity RWObstructionComplexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RWObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DopplerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReverbType ReverbType;
    
    URWAudioComponentSettingsPreset();

};

