#include "WayPoint.h"
#include "PersistencyComponent.h"

AWayPoint::AWayPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("SceneRoot"));
}


