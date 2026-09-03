#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HarvestableConfig.h"
#include "Templates/SubclassOf.h"
#include "HarvestablesConfig.generated.h"

class AHarvestable;
class UStaticMesh;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UHarvestablesConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegenerateHarvestablesEveryDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHarvestable> HarvestableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FHarvestableConfig> Harvestables;
    
    UHarvestablesConfig();

};

