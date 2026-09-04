#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelCrowdControllerInterface.h"
#include "RebelCrowdController.generated.h"

class UActorStub;
class UActorStubSystemImpl;
class UCommunitySystemInterface;
class UNavigationSystemV1;
class UPopulationSystemInterface;
class URebelCrowdDebugSubsystem;
class URebelCrowdPathFindingQueryOwnerWithContext;
class URebelSpatialLayer;
class URebelVisibilitySubsystem;
class UWorld;

UCLASS(Blueprintable)
class POPULATION_API URebelCrowdController : public UObject, public IRebelCrowdControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunitySystemInterface* CommunitySystemInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorStubSystemImpl* ActorStubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPopulationSystemInterface* PopulationSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelVisibilitySubsystem* VisibilitySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCrowdDebugSubsystem* DebugSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* AgentsSpatialLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavigationSystemV1* NavSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorStub* MainPlayerCharacterStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCrowdPathFindingQueryOwnerWithContext* PathFindingQueryOwnerWithContext;
    
public:
    URebelCrowdController();


    // Fix for true pure virtual functions not being implemented
};

