#pragma once
#include "CoreMinimal.h"
#include "PopulationArea.h"
#include "SpawnLevelSettings.h"
#include "DogwoodPopulationArea.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API ADogwoodPopulationArea : public APopulationArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnLevelSettings DaySpawnLevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnLevelSettings NightSpawnLevelSettings;
    
public:
    ADogwoodPopulationArea(const FObjectInitializer& ObjectInitializer);

};

