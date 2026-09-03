#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ChapelChoiceRequiredFacts.h"
#include "EChapelDialogueResult.h"
#include "DogwoodWorldSettings.generated.h"

class UDWActivatableWidget;
class UDataTable;
class UHarvestablesConfig;
class ULootBagsConfig;
class UNiagaraSystem;
class UObjectInvestigationConfig;
class URegionConfigDataAsset;
class URegionMapConfigDataAsset;
class UStringTable;
class UWardConfig;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODWORLD_API UDogwoodWorldSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObjectInvestigationConfig> ObjectInvestigationConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWardConfig> WardConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDWActivatableWidget> LootingPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> FocusSoundSourceNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NecrospeakLootContainerNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> QuestLootContainerNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> SpecialChoicesStringTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> RegionsConfigDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URegionMapConfigDataAsset> ValleyRegionsConfigDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URegionConfigDataAsset> ValleyRegionConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULootBagsConfig> LootBagsConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHarvestablesConfig> HarvestablesConfig;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRanges[6];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChapelDialogueResult, FChapelChoiceRequiredFacts> ChapelChoiceRequiredFacts;
    
    UDogwoodWorldSettings();

};

