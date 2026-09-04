#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RebelAudioArrayOfStates.h"
#include "AudioMusicDataAsset.generated.h"

class UAkStateValue;
class UBiomesMaskAsset;

UCLASS(Blueprintable)
class DOGWOODAUDIO_API UAudioMusicDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultMacroMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRebelAudioArrayOfStates> MacroMusicStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTag> VolumeTagsToGameplayMusicTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NoBiomeMaskState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomeMaskThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ExplicitStackTagsIgnored;
    
    UAudioMusicDataAsset();

};

