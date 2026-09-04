#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavigationTestingActor.h"
#include "ERebelRoadsUnifiedNavigationTestingActorProfile.h"
#include "RebelRoadsUnifiedNavigationRequestProviderInterface.h"
#include "RebelRoadsUnifiedNavigationTestingActor.generated.h"

UCLASS(Blueprintable)
class REBELROADSUNIFIEDNAVIGATION_API ARebelRoadsUnifiedNavigationTestingActor : public ANavigationTestingActor, public IRebelRoadsUnifiedNavigationRequestProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawPath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawUnifiedBiasedNavPath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawUnifiedHybridPath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawUnifiedTransitions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsUnifiedNavigationTestingActorProfile NavProfilePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasRoadGraphData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasNavMeshData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldAvoidUTurns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavigationZoneConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform NavigationZoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavigationZoneExtent;
    
public:
    ARebelRoadsUnifiedNavigationTestingActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

