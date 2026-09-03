#include "InteriorVolumeData.h"

FInteriorVolumeData::FInteriorVolumeData() {
    this->VolumeType = EInteriorVolumeType::Default;
    this->VolumeCameraType = ECameraType::None;
    this->bKickOutPlayerAtNight = false;
    this->KickOutTargetActor = NULL;
    this->bIsValid = false;
}

