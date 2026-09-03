#pragma once
#include "CoreMinimal.h"
#include "ESpawnLevelModifier.h"
#include "SpawnLevelSettings.generated.h"

USTRUCT(BlueprintType)
struct POPULATION_API FSpawnLevelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnLevelModifier LevelModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> MaxLevel;
    
    FSpawnLevelSettings();
};

