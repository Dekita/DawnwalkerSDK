#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "ESpawnLevelModifier.h"
#include "Templates/SubclassOf.h"
#include "PopulationSettings.generated.h"

class UAIDefinition;
class UActorStub;
class UCommunityNPCDefinitionBase;
class UNpcLevelScalingDelays;
class UPlayerDefinitionBase;
class UPopulationAreaEntryProcessor;
class UPopulationExtension;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class POPULATION_API UPopulationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorStub> DefaultStubClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorStub> DefaultPlayerStubClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIDefinition> DefaultPlayerAIDefinition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPlayerDefinitionBase> DefaultPlayerDefinition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeFastOutPlaybackRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSecondsInSingleAP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSecondsInSingleAP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfrequentAPChangeTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequentAPChangeTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APDistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APDistanceToleranceAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceWithoutStepInMontage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleWithoutLocomotionRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllowedWorkCategories;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AllowedBodyTypes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommunityNPCDefinitionBase> PreviewNPCDef;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockAbilitiesTagsWhenUsingThisAp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor OuterTriggerColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterTriggerLineThickness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor InnerTriggerColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerTriggerLineThickness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HardGuardAreaColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SoftGuardAreaColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRangeFar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRangeNear;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SpawnLevelOffsetNormal;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SpawnLevelOffsetBosses;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SpawnLevelOffsetNormalOutscaled;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SpawnLevelOffsetBossesOutscaled;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpawnLevelModifier, int8> SpawnLevelDifficultyModifiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPopulationAreaEntryProcessor> PopulationAreaEntryProcessorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPopulationExtension*> ExtensionCDOs;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNpcLevelScalingDelays> NpcLevelScalingDelays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNpcLevelScalingDelays* LoadedNpcLevelScalingDelays;
    
public:
    UPopulationSettings();

    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetWorkCategories();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetBodyTypes();
    
};

