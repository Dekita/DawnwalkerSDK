#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "CommunityRespawnServiceInterface.h"
#include "CommunityRespawnServiceImpl.generated.h"

class UActorStubSystemInterface;
class UPopulationSystemInterface;

UCLASS(Blueprintable)
class POPULATION_API UCommunityRespawnServiceImpl : public UCommunityRespawnServiceInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorStubSystemInterface* StubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPopulationSystemInterface* PopulationSystem;
    
public:
    UCommunityRespawnServiceImpl();


    // Fix for true pure virtual functions not being implemented
};

