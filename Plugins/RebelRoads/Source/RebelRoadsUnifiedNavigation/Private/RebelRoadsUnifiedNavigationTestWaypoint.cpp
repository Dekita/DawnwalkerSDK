#include "RebelRoadsUnifiedNavigationTestWaypoint.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ARebelRoadsUnifiedNavigationTestWaypoint::ARebelRoadsUnifiedNavigationTestWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->WaypointBaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaypointBaseMeshComponent"));
    this->WaypointMarkerMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaypointMarkerMeshComponent"));
    this->WaypointBaseMaterialInstance = NULL;
    this->WaypointMarkerMaterialInstance = NULL;
    this->bEnabled = true;
    this->WaypointBaseMeshComponent->SetupAttachment(RootComponent);
    this->WaypointMarkerMeshComponent->SetupAttachment(RootComponent);
}


