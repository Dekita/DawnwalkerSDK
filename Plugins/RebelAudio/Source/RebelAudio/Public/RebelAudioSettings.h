#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERebelAudioDialoguePlaybackModeEquivalent.h"
#include "RebelAudioMasteringPresetData.h"
#include "RebelAudioSettings.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UDataTable;
class URebelAudioSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELAUDIO_API URebelAudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAudioMasteringPresetData> SettingsMasteringPresetData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PersistentEventsResolverTable;
    
    URebelAudioSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAudioSettings* Get();
    
};

