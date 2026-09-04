#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AudioCharacterAnimTagEntry.h"
#include "AudioCharacterAnimTaggedData.h"
#include "AudioCharacterAnimationNotifyDataAsset.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioCharacterAnimationNotifyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCharacterAnimTagEntry> CoenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCharacterAnimTagEntry> NPCDefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCharacterAnimTaggedData> NPCData;
    
    UAudioCharacterAnimationNotifyDataAsset();

};

