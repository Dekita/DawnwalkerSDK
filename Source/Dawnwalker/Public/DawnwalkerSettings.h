#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MPCParameterValue.h"
#include "DawnwalkerSettings.generated.h"

class UAnimInstance;
class UAppearanceBase;
class UCharacterMaterialParamsConfig;
class UDawnwalkerLookAtTargetTransientTrackingConfig;
class UDawnwalkerLookAtTurnConfig;
class UDawnwalkerPasserbyLookAtConfig;
class UDawnwalkerRandomLookAtConfig;
class UMaterialParameterCollection;
class UPawnDefinitionBase;
class UQuestSketch;
class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DAWNWALKER_API UDawnwalkerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSketch> DefaultMainQuestSketch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSketch> ChickenTestSketch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ForcedFadeWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalTimeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAppearanceBase> ErrorCharacterAppearance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> DefaultDialogueLayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearanceRandomizerTestDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCharacterMaterialParamsConfig> CharacterMaterialParamsConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayDialoguePlayRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseDialogueRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DialogueInterruptReactionInputName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DialogueReturnReactionInputName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UAnimInstance>> ControlRigLayerByLeaderMeshName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMaterialParameterCollection>, FMPCParameterValue> CinematicModeMPCValueOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPawnDefinitionBase> BaseNpcDefinitionToSpawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDawnwalkerLookAtTurnConfig> DefaultLookAtTurnConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDawnwalkerLookAtTargetTransientTrackingConfig> DefaultLookAtTargetTrackingConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDawnwalkerRandomLookAtConfig> DefaultRandomLookAtConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDawnwalkerPasserbyLookAtConfig> DefaultPasserbyLookAtConfig;
    
    UDawnwalkerSettings();

};

