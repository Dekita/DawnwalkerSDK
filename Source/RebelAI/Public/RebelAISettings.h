#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "RebelAIAggressionSettings.h"
#include "RebelAIPositioningSettings.h"
#include "RebelAISettings.generated.h"

class URebelAIFactionMatrixAsset;
class URebelAIGameEventProcessor;
class URebelAINPCSoundConfig;
class URebelAIProjectReactionsConfig;
class URebelAIReactionsController;
class URebelAISettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELAI_API URebelAISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelAIProjectReactionsConfig> ReactionsConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelAINPCSoundConfig> DefaultSoundConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelAIFactionMatrixAsset> FactionMatrix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIAggressionSettings Aggression;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIPositioningSettings Positioning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URebelAIGameEventProcessor> GameEventProcessorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URebelAIReactionsController> ReactionControllerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> TagSelectionWeights;
    
    URebelAISettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAISettings* Get_BP();
    
};

