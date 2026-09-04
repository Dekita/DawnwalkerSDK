#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SpawnLevelSettings.h"
#include "EHostileOverride.h"
#include "ERespawnType.h"
#include "RebelFormationPawnDefinition_AlertSpawnInformation.h"
#include "Templates/SubclassOf.h"
#include "RebelFormationPawnDefinition.generated.h"

class UAIDefinition;
class UAIReactionsConfig;
class UCommunityNPCDefinitionBase;
class URebelCharacterMovementProfile;

USTRUCT(BlueprintType)
struct REBELFORMATION_API FRebelFormationPawnDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommunityNPCDefinitionBase> NPCDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIDefinition> AIDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer QuestTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHostileOverride OverrideIsEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnType RespawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Sterring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelFormationPawnDefinition_AlertSpawnInformation AlertLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnLevelSettings SpawnLevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* MovementProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AIFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIReactionsConfig> ReactionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowChangePositionInFormation;
    
    FRebelFormationPawnDefinition();
};

