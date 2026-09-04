#include "RebelHorse.h"
#include "RebelHorseMovement.h"

ARebelHorse::ARebelHorse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URebelHorseMovement>(TEXT("CharMoveComp"))) {
    this->Rider = NULL;
    this->RiderController = NULL;
    this->MountAnimLayer = NULL;
}

bool ARebelHorse::RiderMount(ACharacter* InRider, FRebelHorseRiderMountInfo InMountInfo) {
    return false;
}

bool ARebelHorse::RiderDismount(FRebelHorseRiderDismountInfo InDismountInfo) {
    return false;
}

bool ARebelHorse::HasRider() const {
    return false;
}

APawn* ARebelHorse::GetRider() const {
    return NULL;
}






