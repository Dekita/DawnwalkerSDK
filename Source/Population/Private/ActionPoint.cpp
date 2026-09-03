#include "ActionPoint.h"
#include "PersistencyComponent.h"

AActionPoint::AActionPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("SceneRoot"));
    this->TimeLimit = -1.00f;
    this->bPlayAnimationEvenWhenNotVisible = false;
    this->IndexOnRoute = -1;
    this->bLastOnRoute = false;
    this->ActionPointLocation = EActionPointLocation::NotChecked;
    this->bUseExactLocations = false;
    this->bBlockReactions = true;
    this->bBlockOneLinersWhenUsingThisAp = false;
    this->bBlockUsingAbilitiesWhenUsingThisAp = false;
    this->bUseTorch = false;
    this->bHavePrecalculatedBounds = false;
}

bool AActionPoint::IsUnderRoof() const {
    return false;
}


