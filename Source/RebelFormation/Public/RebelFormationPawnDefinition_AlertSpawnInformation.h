#pragma once
#include "CoreMinimal.h"
#include "EAlertStage.h"
#include "RebelFormationPawnDefinition_AlertSpawnInformation.generated.h"

USTRUCT(BlueprintType)
struct REBELFORMATION_API FRebelFormationPawnDefinition_AlertSpawnInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertStage MinimalAlertLevelToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertStage MaximalAlertLevelToSpawn;
    
    FRebelFormationPawnDefinition_AlertSpawnInformation();
};

