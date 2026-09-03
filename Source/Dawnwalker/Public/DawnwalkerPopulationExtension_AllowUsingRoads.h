#pragma once
#include "CoreMinimal.h"
#include "PopulationExtension.h"
#include "PopulationExtensionInterface_Flags.h"
#include "PopulationExtensionInterface_Roads.h"
#include "PopulationExtensionInterface_SpawnLocationProvider.h"
#include "DawnwalkerPopulationExtension_AllowUsingRoads.generated.h"

class UDawnwalkerPopulationExtensionComponent_Roads;
class UDawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads;
class UDawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads;

UCLASS(Blueprintable, CollapseCategories)
class DAWNWALKER_API UDawnwalkerPopulationExtension_AllowUsingRoads : public UPopulationExtension, public IPopulationExtensionInterface_SpawnLocationProvider, public IPopulationExtensionInterface_Roads, public IPopulationExtensionInterface_Flags {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads* Trait_AllowUsingRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads* SpawnLocationProvider_Roads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerPopulationExtensionComponent_Roads* Roads;
    
public:
    UDawnwalkerPopulationExtension_AllowUsingRoads();


    // Fix for true pure virtual functions not being implemented
};

