#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "RebelRoadsUnifiedNavigationRequestProviderInterface.h"
#include "RebelRoadsUnifiedNavigationTestAIController.generated.h"

class AActor;
class ARebelRoadsUnifiedNavigationTestCharacter;
class URebelRoadsUnifiedPathFollowingComponent;

UCLASS(Blueprintable)
class REBELROADSUNIFIEDNAVIGATION_API ARebelRoadsUnifiedNavigationTestAIController : public AAIController, public IRebelRoadsUnifiedNavigationRequestProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsUnifiedPathFollowingComponent* UnifiedPathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARebelRoadsUnifiedNavigationTestCharacter* WalkerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentWaypointTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastVisitedWaypoint;
    
public:
    ARebelRoadsUnifiedNavigationTestAIController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

