#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavigationTestingActor.h"
#include "RebelNavigationTestingActor.generated.h"

class URebelRoadsPathFindingQueryOwnerWithContext;

UCLASS(Blueprintable)
class REBELROADS_API ARebelNavigationTestingActor : public ANavigationTestingActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseRoads: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseNavMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHybridPath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHybridPathSmoothing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavigationZoneConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform NavigationZoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavigationZoneExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsPathFindingQueryOwnerWithContext* PathFindingQueryOwnerWithContext;
    
public:
    ARebelNavigationTestingActor(const FObjectInitializer& ObjectInitializer);

};

