#pragma once
#include "CoreMinimal.h"
#include "PopulationExtension.h"
#include "PopulationExtensionInterface_BehaviorProvider.h"
#include "PopulationExtensionInterface_SpawnLocationProvider.h"
#include "DawnwalkerPopulationExtension_RandomWalkingOnRoads.generated.h"

class UBehaviorTree;
class UDawnwalkerNPCBehavior_RandomWalkingOnRoads;
class UDawnwalkerPopulationExtensionComponent_Behavior;
class UDawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads;
class UDawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads;

UCLASS(Blueprintable, CollapseCategories, Config=Engine)
class DAWNWALKER_API UDawnwalkerPopulationExtension_RandomWalkingOnRoads : public UPopulationExtension, public IPopulationExtensionInterface_SpawnLocationProvider, public IPopulationExtensionInterface_BehaviorProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* LoadedBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerPopulationExtensionComponent_Behavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads* Trait_AllowUsingRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads* SpawnLocationProvider_Roads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerNPCBehavior_RandomWalkingOnRoads* RuntimeBehavior;
    
public:
    UDawnwalkerPopulationExtension_RandomWalkingOnRoads();


    // Fix for true pure virtual functions not being implemented
};

