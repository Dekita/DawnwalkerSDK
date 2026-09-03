#include "RWSpatialAudioVolume.h"
#include "RWRoomComponent.h"

ARWSpatialAudioVolume::ARWSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URWRoomComponent>(TEXT("RWAkRoom"))) {
    this->SurfaceReflectorSet = NULL;
    this->RWRoom = NULL;
    this->Room->SetupAttachment(RootComponent);
}


