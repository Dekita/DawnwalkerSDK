#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERebelFoliageMetadataType.h"
#include "3dEmittersOnCharacterRingData.h"
#include "AmbientBedEventsData.h"
#include "BiomeMaskParameterData.h"
#include "FoliageInstanceAudioData.h"
#include "AudioAmbientMasksDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;
class UBiomesMaskAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioAmbientMasksDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    F3dEmittersOnCharacterRingData TopRingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    F3dEmittersOnCharacterRingData MidRingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    F3dEmittersOnCharacterRingData LowRingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ValidLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelFoliageMetadataType, FFoliageInstanceAudioData> FoliageInstanceData;
    
    UAudioAmbientMasksDataAsset();

};

