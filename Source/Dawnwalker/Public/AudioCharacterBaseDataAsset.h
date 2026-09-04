#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AudioNPCBodyTypeData.h"
#include "AudioNPCInitializationData.h"
#include "AudioCharacterBaseDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioCharacterBaseDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioNPCInitializationData> NPCInitializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioNPCBodyTypeData> NPCBodyTypeData;
    
    UAudioCharacterBaseDataAsset();

};

