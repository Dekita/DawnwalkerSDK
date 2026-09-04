#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RebelRoadsUnifiedNavigationTestWaypoint.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class REBELROADSUNIFIEDNAVIGATION_API ARebelRoadsUnifiedNavigationTestWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WaypointBaseMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WaypointMarkerMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WaypointBaseMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WaypointMarkerMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ARebelRoadsUnifiedNavigationTestWaypoint(const FObjectInitializer& ObjectInitializer);

};

